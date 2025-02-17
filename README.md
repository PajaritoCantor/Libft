| ft_memchr |
|--------|
**Descripción**
La función ft_memchr() explora los **n bytes** iniciales del **área de memoria** apuntada por **s** en busca de la primera instancia de **c**. 
Tanto **c** como los **bytes del área de memoria** apuntados por **s** se interpretan como **unsigned char.**
**Valor devuelto**
La función **ft_memchr()** devuelve un **puntero** al byte correspondiente o NULL si el carácter no se encuentra en la zona de memoria dada.

| [ft_strnstr](https://github.com/PajaritoCantor/Libft/blob/main/ft_strnstr.c) |
|--------|
**Descripción**
La función ft_strnstr busca la primera aparición de la cadena **needle** dentro de la cadena **haystack**, pero solo en los primeros **len** caracteres de haystack.
Si **needle** es una cadena vacía, la función devuelve **haystack** tal cual. Si **needle** no se encuentra dentro de los primeros **len** caracteres de **haystack**, devuelve NULL.
Esta función es útil cuando se necesita buscar una subcadena dentro de otra, pero con una limitación de longitud, evitando acceder más allá de lo permitido en estructuras como buffers o regiones de memoria restringidas. 

