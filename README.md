# Get_Next_Line - C - 2019
Get_Next_Line is a function that reads a file line by line.

## WeThinkCode:

**Mandatory:** 100/100  
**Bonus:** 25/25  
**Peers:** 125%  
  
**Total:** 125/125

## Installation:

To get started, clone the Get_Next_Line repo and go into the folder:

```
git clone https://github.com/nonewline/GNL
cd GNL/GNL/
```
Run the following command to compile the libft and the function (Change 'main.c' to suit your main's name and 'test_gnl' to something you want.):

```
make -C libft/ fclean && make -C libft/
clang -Wall -Werror -Wextra -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Werror -Wextra -I libft/includes -o main.o -c main.c
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
```

## Running the tests:

To test the function, you need to have files you want to read.

### Running the Get_Next_Line function:

Run the executable with './[executable name]' and add the file name you want to read:

```
./[executable name] [file name]
```

## Disclaimer:

This is [Mike's](https://github.com/MikeFMeyer) GNL. If you have questions, ask him.  
Don't just use his code without his permission.

## Don't be a GitHub hero!

It won't help just stealing code. Come talk to one of the NoNewLine members if you're unsure about how something works.  
[Mike](https://github.com/MikeFMeyer) wrote this one and he'll be your best help if you need any.  
Also, check out his other stuff. You might find something cool!  
Thanks!
