| ft_memchr |
|--------|
**Descripción**
La función ft_memchr() explora los **n bytes** iniciales del **área de memoria** apuntada por **s** en busca de la primera instancia de **c**. 
Tanto **c** como los **bytes del área de memoria** apuntados por **s** se interpretan como **unsigned char.**
**Valor devuelto**
La función **ft_memchr()** devuelve un **puntero** al byte correspondiente o NULL si el carácter no se encuentra en la zona de memoria dada.

| [ft_strnstr](https://github.com/PajaritoCantor/Libft/blob/main/ft_strnstr.c) |
|--------|
**Descripción** La función ft_strnstr busca la primera aparición de la cadena **needle** dentro de la cadena **haystack**, pero solo en los primeros **len** caracteres de haystack.
Si **needle** es una cadena vacía, la función devuelve **haystack**, ya que buscar una cadena vacía siempre debe retornar el inicio de la cadena donde se busca.
Si **needle** no se encuentra dentro del límite de **len** caracteres, la función devuelve NULL.
Si **len** es 0, la función también devuelve **NULL**, ya que no se puede examinar ningún carácter de **haystack**.
Esta función es útil cuando se necesita buscar una subcadena dentro de otra sin recorrer más allá de un límite especificado, como en estructuras de datos con buffers limitados o regiones de memoria restringidas.
**Funcionamiento**
1️⃣ Se calcula la longitud de `needle` y `haystack`.  
2️⃣ Si `len` es mayor que `haystack`, se ajusta para evitar accesos fuera de rango.  
3️⃣ Se recorre `haystack`, asegurándose de que haya suficiente espacio restante para `needle`.  
4️⃣ En cada posición, se comparan los primeros caracteres con `needle`.  
5️⃣ Si hay coincidencia, se retorna un puntero a esa posición.  
6️⃣ Si no hay coincidencia, se avanza un carácter en `haystack` y se reduce `len`.  
7️⃣ Si `needle` no se encuentra dentro del límite de búsqueda, se retorna `NULL`.  
Ejemplo:
Buscando "tos" en "Ppapapapapapapaptospapapapapapa" con `len = 25`

| Iteración | haystack (posición)            | Comparación con "tos" | Resultado |
|-----------|--------------------------------|-----------------------|-----------|
| 1         | `Ppapapapapapapaptospapapapapapa` | ❌ No coincide       | Continúa  |
| 2         | `papapapapapapaptospapapapapapa` | ❌ No coincide       | Continúa  |
| ...       | ...                            | ...                   | ...       |
| 17        | `tospapapapapapa`              | ✅ Coincide           | Retorna puntero |
