str="hello"
str2=${str#h}
str3=${str%o}
echo $str2
echo $str3


str="hello;world"
strs=(${str//;/ })
echo ${strs[0]}
echo ${strs[1]}

str="hello*world"
strs=(${str//\*/ })
echo ${strs[0]}
echo ${strs[1]}
