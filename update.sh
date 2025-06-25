#!/bin/sh

export EDITOR=vin
git config --global user.email ab25cq@icloud.com
git config --global user.name ab25cq

#sh remove_all_build.sh

#git add .
#git commit 
#git remote set-url origin git@github.com:ab25cq/minux9.git
#git push --force origin master


echo "# minux9" >> README.md
git init
git add .
git commit 
git branch -M main
git remote set-url origin https://github.com/ab25cq/minux9.git
git push -u origin main
