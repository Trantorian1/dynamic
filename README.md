<h1 align="center">
	<br>
	<img src="https://raw.githubusercontent.com/Trantorian1/dynamic/dev/res/logo.png" alt="Markdownify" width="200">
	<br>
  Libdynamic
  <br>
</h1>

<h4 align="center">A Fast and Usable C dynamic string library.</h4>

<p align="center">
  <a href="#key-features">Key Features</a> •
  <a href="#installation">Installation</a> •
  <a href="#usage">Usage</a> •
  <a href="#structures">Structures</a> •
  <a href="#functions">Functions</a> •
  <a href="#license">License</a>
</p>

![screenshot](https://raw.githubusercontent.com/Trantorian1/dynamic/dev/res/header.png)

## Key Features

_Libdynamic_ is a **C dynamic string library** with a focus on performance and usability, bringing string manipulation closer to that of languages such as C++.
It achieves this through length-aware strings and pre-allocation to minimize the number of resizings necessarry. This makes it an excellent choice for applications
with even a large number of strings, as memory is kept fairly dense as long as strings are not appended an outrageous amount of times.

> **Warning**
> Keep in mind that _Libdymamic_'s resizing strategy is optimisitic, which is to say it always assumes there is enough memory left for allocation.
> If this fails, the library will automatically exit. 

## Installation

<table>
  <!-- Table Header -->
  <tr>
    <!-- Header Row -->
    <th style="text-align:center;">Dependencies</th>
    <th style="text-align:center;">Usage</th>
  </tr>
  <!-- Table Body -->
  <tbody>
    <!-- First Row -->
    <tr>
      <td style="text-align:center;"><img src="https://img.shields.io/badge/docker-blue?logo=docker&logoColor=white" alt="Static Badge"></td>
      <td style="text-align:center;">Unit testing</td>
    </tr>
    <!-- Second Row -->
    <tr>
      <td style="text-align:center;">
        <img src="https://img.shields.io/badge/clang-orange?logo=c&logoColor=white" alt="Static Badge">
        <img src="https://img.shields.io/badge/make-black?logo=gnu&logoColor=white" alt="Static Badge">
      </td>
      <td style="text-align:center;">Compilation</td>
    </tr>
  </tbody>
</table>

You can install _libdynamic_ alognside your project as a <a href="https://git-scm.com/book/en/v2/Git-Tools-Submodules">git submodule</a>. This is the preferred way of using the library as it will 'freeze' the version being used and associate it to you project.
If you wish to use a newer version of the library, you will have to manually pull it and commit the change to your project.

1. Navigate to the directory you want to clone _libdynamic_ at. This can be somewhere like `vendor/`:
    ```bash
    mkdir vendor && cd vendor
    ```
    
2. Add _libdynamic_ as a submodule:
    ```bash
    git submodule add https://github.com/Trantorian1/dynamic.git
    ```

## Usage

_Libdynamic_ does not come with pre-built binaries yet, so you will have to build from source yourself.

1. Head to the folder in which you cloned _libdynamic_ and run the following command:
     ```bash
     make final
     ```
     
     > If this does not work, make sure you have **docker installed** and the **docker engine** running as _libdynamic_ uses it to compile and run its unit tests.

3. Once all unit tests have been run, you will find the following archive:
     ```bash
     bin/libdynamic.a
     ```

Make sure to link this archive using `-Lvendor/dynamic/bin -ldynamic -Ivendor` when compiling your code.

- Here's a basic example of how to use _libdynamic_ in your C code:
  
    ```c
    #include <stdio.h>
    #include "dynamic/string.h"
    
    int  main(void)
    {
      t_str  *str;
    
      // creates a new dynamic string from a C string
      str = str_create("");
    
      // you can append to a string, one character at a time...
      str_append_char(str, 'H');
      str_append_char(str, 'e');
      str_append_char(str, 'l');
      str_append_char(str, 'l');
      str_append_char(str, 'o');
    
      // or one C string at a time...
      str_append_str(str, "world");
    
      // you can also insert characters...
      str_insert_char(str, ' ', 5);
    
      // or strings...
      str_insert_str(str, "there ", 6);
    
      // how about prepending? Yep, you can do that too!
      str_prepend_char(str, ' ');
      str_prepend_str(str, "Hey!");
    
      // of course you might want to retrieve the string's value and length
      printf("str='%s' len=%zu\n", str->get, str->len);
    
      // remember that strings created with str_create must be destroyed with
      // str_destroy otherwise you risk having still reachable memory
      str_destroy(str);
    
      return (0);
    }
    ```

## Structures

Libdynamic introduces a new `t_str` structure as well as the type `t_cstr`.

```c
// new dynamic string structure
typedef struct s_str
{
	char *_Nonnull get;
	size_t         len;
}	t_str;

// slightly more idomatic typedef to c's default strings
typedef char * t_cstr;
```

> **Note**
> `t_str` also has several library-reserved attributes. You can find those in `include/s_str.h`. Make sure you know what you are doing
> as erroneous manipulation might break the library!

## Functions

- ```c
  t_str *_Nullable    str_create(t_cstr _Nonnull cstr)
  ```
  Creates a new dynamic string of the given C string.

- ```c
  void                str_destroy(t_str *_Nullable str)
  ```
  Frees up the memory used by a dynamic string.

- ```c
  t_str *_Nullable    str_append_char(t_str *_Nonnull str, char c)
  ```
  Appends a character at the end of a dynamic string.

- ```c
  t_str *_Nullable    str_append_str(t_str *_Nonnull str, t_cstr _Nonnull cstr)
  ```
  Appends a C string at the end of a dynamic string.

- ```c
  t_str *_Nullable    str_prepend_char(t_str *_Nonnull str, char c)
  ```
  Prepends a character at the front of a dynamic string.

- ```c
  t_str *_Nullable    str_prepend_str(t_str *_Nonnull str, t_cstr _Nonnull cstr)
  ```
  Prepends a C string at the frint of a dynamic string.

- ```c
  t_str *_Nullable    str_insert_char(t_str *_Nonnull str, char c, size_t index)
  ```
  Inserts a character at a given index in a dynamic string.

- ```c
  t_str *_Nullable    str_insert_str(t_str *_Nonnull str, t_cstr _Nonnull cstr, size_t index)
  ```
  Inserts a C string at a given index in a dynamic string.

## License

MIT
