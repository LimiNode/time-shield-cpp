import { expect, test } from '@playwright/test';

function assertHorizontallyInside(inner, outer) {
    expect(inner.x).toBeGreaterThanOrEqual(outer.x);
    expect(inner.x + inner.width).toBeLessThanOrEqual(outer.x + outer.width);
}

function assertNoOverlap(first, second) {
    const overlaps = first.x < second.x + second.width
        && first.x + first.width > second.x
        && first.y < second.y + second.height
        && first.y + first.height > second.y;
    expect(overlaps).toBe(false);
}

async function loadDocumentation(page, width, height) {
    await page.setViewportSize({ width, height });
    await page.goto('/index.html', { waitUntil: 'networkidle' });
    await page.locator('#MSearchBox').waitFor({ state: 'visible' });
    await page.waitForFunction(() => {
        const toggles = document.querySelectorAll('doxygen-awesome-dark-mode-toggle');
        return toggles.length === 1
            && document.querySelector('#time-shield-theme-toggle > doxygen-awesome-dark-mode-toggle');
    });
    await page.waitForTimeout(200);
}

test('desktop search layout stays within the sidebar and viewport', async ({ page }) => {
    await loadDocumentation(page, 1440, 900);

    const search = await page.locator('#MSearchBox').boundingBox();
    const sidebar = await page.locator('#side-nav').boundingBox();
    const toggle = await page.locator('doxygen-awesome-dark-mode-toggle').boundingBox();
    expect(search).not.toBeNull();
    expect(sidebar).not.toBeNull();
    expect(toggle).not.toBeNull();
    assertHorizontallyInside(search, sidebar);
    assertHorizontallyInside(toggle, sidebar);
    expect(search.x).toBeGreaterThanOrEqual(0);
    expect(search.y).toBeGreaterThanOrEqual(0);
    expect(search.x + search.width).toBeLessThanOrEqual(1440);
    expect(search.y + search.height).toBeLessThanOrEqual(900);
    assertNoOverlap(search, toggle);
    expect(toggle.y).toBeLessThanOrEqual(search.y);
});

test('mobile search layout has no overflow or toggle overlap', async ({ page }) => {
    await loadDocumentation(page, 390, 844);

    const search = await page.locator('#MSearchBox').boundingBox();
    const toggle = await page.locator('doxygen-awesome-dark-mode-toggle').boundingBox();
    expect(search).not.toBeNull();
    expect(toggle).not.toBeNull();
    expect(search.x).toBeGreaterThanOrEqual(0);
    expect(search.y).toBeGreaterThanOrEqual(0);
    expect(search.x + search.width).toBeLessThanOrEqual(390);
    expect(search.y + search.height).toBeLessThanOrEqual(844);
    assertNoOverlap(search, toggle);
    expect(toggle.y).toBeLessThanOrEqual(search.y);
    expect(await page.locator('#time-shield-theme-toggle > doxygen-awesome-dark-mode-toggle').count()).toBe(1);
    expect(await page.evaluate(() => document.documentElement.scrollWidth))
        .toBeLessThanOrEqual(390);
});
