#!/bin/sh

make clean

export EDITOR=vin
git config --global user.email ab25cq@gmail.com
git config --global user.name ab25cq

git add .
git commit 
git remote add origin git@github.com:ab25cq/minux9.git
git remote set-url origin git@github.com:ab25cq/minux9.git
git push --force origin master 


