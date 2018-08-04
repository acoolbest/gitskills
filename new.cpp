haha



git reset HEAD~2 // 日志回退2个版本，但代码未变

git checkout -- <文件或目录> //放弃当前的数据改动

git reset --hard HEAD~2 //日志和代码均回退2个版本

git reset --hard HEAD~2   ==  git reset HEAD~2 +  git checkout -- <文件或目录>