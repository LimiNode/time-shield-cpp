import { defineConfig } from '@playwright/test';

export default defineConfig({
    testDir: '.',
    timeout: 30000,
    use: {
        baseURL: 'http://127.0.0.1:4173',
        browserName: 'chromium'
    },
    webServer: {
        command: 'python3 -m http.server 4173 --directory docs/html',
        cwd: '../..',
        url: 'http://127.0.0.1:4173/index.html',
        reuseExistingServer: false,
        timeout: 30000
    }
});
