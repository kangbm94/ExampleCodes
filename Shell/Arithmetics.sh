for i in {1..10}
do
	val=`expr $i \* $i + $i`
	echo $val
done
