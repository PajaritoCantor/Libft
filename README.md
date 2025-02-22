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

| **Función** | **Descripción y Funcionamiento** |
|-------------|-----------------------------------|
| [ft_strlcpy](https://github.com/PajaritoCantor/Libft/blob/main/ft_strlcpy.c) | **Descripción**: <br> La función `ft_strlcpy` copia una cadena de caracteres desde `src` hasta `dst`, asegurándose de que la cadena de destino siempre termine en `'\0'` (carácter nulo), incluso si `dstsize` es menor que la longitud de `src`. <br> A diferencia de `strcpy`, esta función protege contra desbordamientos de buffer al recibir el tamaño máximo permitido en `dstsize`. <br>  Si `dstsize` es 0, la función no copia nada y simplemente devuelve la longitud de `src`. <br> El valor de retorno es la longitud total de `src`, lo que permite saber si hubo truncamiento. <br> <br>**Funcionamiento**: <br> 1. Obtener la longitud de `src` usando `ft_strlen`. <br> 2. Si `dstsize` es mayor a 0, copiar hasta `dstsize - 1` caracteres de `src` a `dst`, dejando siempre espacio para el carácter `'\0'`. <br> 3. Asegurar la terminación de `dst` agregando `'\0'` en la última posición disponible. <br> 4. Retornar la longitud de `src`, permitiendo al usuario saber si la copia fue completa o truncada. |
