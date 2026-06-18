@echo off
chcp 65001 >nul
cd /d "D:\19839\cc"

git add .
git commit -m "feat: daily practice %date%"
git push

if %errorlevel%==0 (
    echo.
    echo ======== PUSH SUCCESS! ========
) else (
    echo.
    echo ======== Nothing to push or failed ========
)

echo.
pause
