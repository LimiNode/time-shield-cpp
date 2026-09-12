(function () {
    function moveThemeToggle() {
        var target = document.getElementById("time-shield-theme-toggle");
        var toggles = document.querySelectorAll("doxygen-awesome-dark-mode-toggle");
        if (!target || toggles.length === 0) {
            return;
        }

        if (toggles[0].parentNode !== target) {
            target.appendChild(toggles[0]);
        }
        for (var i = 1; i < toggles.length; ++i) {
            toggles[i].remove();
        }
    }

    document.addEventListener("DOMContentLoaded", function () {
        moveThemeToggle();
        window.addEventListener("resize", moveThemeToggle);
        var observer = new MutationObserver(moveThemeToggle);
        observer.observe(document.body, { childList: true, subtree: true });
        window.setInterval(moveThemeToggle, 100);
    });
})();
