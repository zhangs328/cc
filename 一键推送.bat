@echo off
cd /d "C:\Users\19839\Desktop\cc"

git add .
git commit -m "feat: 日常练习自动提交 %date%"
git push

if %errorlevel%==0 (
    echo.
    echo ======== 推送成功！绿色格子已点亮 ========
) else (
    echo.
    echo ======== 没有新内容或推送失败 ========
)

pause
