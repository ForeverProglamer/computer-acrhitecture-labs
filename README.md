# Lab №3

## Options list
    -a, --all - shows options list
    -e, --echo - echo given text
    -h, --help - prints help message
    -j, --just-do-it - lead you to act by yourself
    -s, --save - saves data to given filename

## Results

```
>./output --all -h -j
Parameters list:
-a or --all
-e or --echo
-h or --help
-j or --just-do-it
-s or --save
You`ve specified help option, but help is deprecated. Use -j or --just-do-it instead...
Short help option
Pull yourself together man, you`re need no help.
``` 

```
>./output -e"Some text" --echo="Another text" -s"result.txt" --save="data.csv"
You echoed this: Some text
Saving data to = result.txt
```

```
>./output --echo --help -ae"bla bla"
There is nothing to echo :(
You`ve specified help option, but help is deprecated. Use -j or --just-do-it instead...
Long help option
Parameters list:
-a or --all
-e or --echo
-h or --help
-j or --just-do-it
-s or --save
```

```
>./output --unknown-option -u
./output: unrecognized option '--unknown-option'
Take a look at options list and stop specifying wrong parameters!
./output: invalid option -- 'u'
Take a look at options list and stop specifying wrong parameters!
```
