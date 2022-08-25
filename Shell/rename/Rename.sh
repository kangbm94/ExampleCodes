#Usage:
#source Rename.sh 'foo1\*foo2' 'faa1\*faa2'
#This will rename files foo1*foo2 ->faa1*faa2, where * can be any strings.



bf=$1
af=$2
bfs=(${bf//\*/ })
bf1=${bfs[0]}
bf1=${bf1%\\}
bf2=${bfs[1]}

afs=(${af//\*/ })
af1=${afs[0]}
af1=${af1%\\}
af2=${afs[1]}

for before in $arg1*$arg2
do
	after=${before#$bf1}
	after=${after%$bf2}
	after=$af1$after$af2
	mv "$before" "$after"
done
