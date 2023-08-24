# git-config
git config --global core.safecrlf warn
git config --global core.quotepath off
git config --global init.defaultBranch main
git config --global user.name “Anna Volkova”
git config --global user.email “anna35.anna35.v@gmail.com”
git config --global core.autocrlf true
git init
git status
git add .
git commit -m "проект создан"
git diff --color-words
git add .
git commit -m "отредактированы блоки в html header, footer, а также css файлы normalize, header, footer"
git diff --color-words
git push
git diff --color-words
git add .
git commit -m "отредактированы css файл indent"
git diff --color-words
git push