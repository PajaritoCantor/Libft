# 👨‍💻 LIBFT 

#### Os comparto mi librería en C modificada y optimizada.<br><br>He dedicado tiempo a escribiros apuntes sobre cada función para que podais abordarlas vosotros mismos.<br><br>Son anotaciones desde la experiencia de alguien que suele hacer muchos cuestionamientos a cada línea de código y al por qué de las cosas. 

#### PD: Os comparto al inicio un manual básico de cómo debuggear vuestras funciones y de este modo explorar el funcionamiento de cada una.

### 🟢 Debuggeo básico con LLDB

<details>
<summary>Ver Comandos</summary>

* **1. Iniciar el lldb con el ejecutable**

        lldb ./a.out

* **2. Establecer un punto de interrupción en una función**
  
            (lldb) b main
  
  - **Si quieres establecer un punto de interrupción en una línea específica:**
  
            (lldb) b tu_programa.c:10
      
  - **Si quieres ver todos los puntos de interrupción:**
      
            (lldb) breakpoint list
  
  - **Si quieres eliminar un punto de interrupción:**

            (lldb) breakpoint delete 1  # 1 es el número del punto de interrupción
      

* **3. Ejecuta el programa:**
  - Ejecuta el programa hasta que se encuentre un punto de interrupción.
  
            (lldb) r
      

* **4. Avanzar línea por línea**
  - Avanzar sin entrar en funciones:
      
            (lldb) n
      
  - Entrar en una función:
     
            (lldb) s
      

* **5. Si quieres inspeccionar variables**
  - Si quieres imprimir el valor de una variable:
      
            (lldb) p variable
     
  - Si quieres ver todas las variables locales:
      
            (lldb) fr v
      
  - Si quieres ver el contenido de un arreglo o puntero:
      
            (lldb) memory read puntero
      

* **6. Continuar la ejecución**
  - Continúa la ejecución hasta el siguiente punto de interrupción.
      
            (lldb) c
      

* **10. Salir de LLDB**
  - Cuando termines de depurar, sal de LLDB.
      
            (lldb) q


* **Comandos Útiles Adicionales**
  - **Ver el tamaño de una variable:**
      
            (lldb) p sizeof(variable)
      
  - **Ver el contenido de un arreglo como una cadena:**
      
            (lldb) p (char *)arreglo
      
  - **Ver el contenido de la pila de llamadas:**
     
            (lldb) bt
</details>

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


| **Función** | **Descripción y Funcionamiento** |
|-------------|-----------------------------------|
| [ft_memcpy](https://github.com/PajaritoCantor/Libft/blob/main/ft_memcpy.c) | **Descripción:** <br> La función ft_memcpy copia `n bytes` desde el área de memoria `src` al área de memoria `dest`. <br> A diferencia de `memmove`, esta función no maneja solapamientos entre las áreas de memoria, por lo que el comportamiento es indefinido si `src` y `dest` se superponen. <br> Si `dest` o `src` son punteros nulos (NULL), la función devuelve NULL. <br> El valor de retorno es un puntero a `dest`, lo que permite usar la función en expresiones más complejas. <br> <br> **Funcionamiento:** <br>1. Verificar que tanto `dest` como `src` no sean punteros nulos. Si alguno es nulo, la función retorna NULL. <br> 2. Convertir los punteros `dest` y `src` a punteros de tipo `unsigned char` para permitir la copia byte a byte. <br> 3. Copiar `n bytes` desde `src a dest`, avanzando ambos punteros en cada iteración. <br> 4. Retornar el puntero a `dest`, que ahora contiene los `n bytes` copiados desde `src`.


| **Función** | **Descripción y Funcionamiento** |
|-------------|-----------------------------------|
| [ft_strlcpy](https://github.com/PajaritoCantor/Libft/blob/main/ft_strlcpy.c) | **Descripción**: <br> La función `ft_strlcpy` copia una cadena de caracteres desde `src` hasta `dst`, asegurándose de que la cadena de destino siempre termine en `'\0'` (carácter nulo), incluso si `dstsize` es menor que la longitud de `src`. <br> A diferencia de `strcpy`, esta función protege contra desbordamientos de buffer al recibir el tamaño máximo permitido en `dstsize`. <br>  Si `dstsize` es 0, la función no copia nada y simplemente devuelve la longitud de `src`. <br> El valor de retorno es la longitud total de `src`, lo que permite saber si hubo truncamiento. <br> <br>**Funcionamiento**: <br> 1. Obtener la longitud de `src`. <br> 2. Si la longitud del destino es mayor a 0, copiar hasta antes del caracter nulo los caracteres de `src` a `dst`, dejando siempre espacio para el carácter `'\0'`. <br> 3. Asegurar la terminación de `dst` agregando `'\0'` en la última posición disponible. <br> 4. Retornar la longitud de `src`, permitiendo al usuario saber si la copia fue completa o truncada. |

| **Función** | **Descripción y Funcionamiento** |
|-------------|-----------------------------------|
|ft_memmove | **Descripción**: La función `memmove()` copia `n bytes` del área de memoria `src` al área de memoria `dest`. <br>Las áreas de memoria pueden solaparse: la copia se realiza como si los bytes en `src` se copiaran primero en una matriz temporal que no se solapara con `src` o `dest`, y luego los bytes se copian de la matriz temporal a `dest`. <br>La función `memmove()` devuelve un puntero a `dest`.<br><br>**Funcionamiento:** <br>1. **Verificación de entradas:** Asegurarse de que las áreas de memoria de origen y destino sean válidas antes de realizar cualquier operación.<br>2. **Preparación para la copia** Convertir las áreas de memoria a un formato que permita la manipulación byte a byte.<br>3. **Detección de solapamiento** Determinar si las áreas de memoria de origen y destino se superponen. Esto es crucial para decidir la dirección en la que se realizará la copia.<br>4. **copia segura**: **Si hay solapamiento:** Realizar la copia desde el final hasta el inicio para evitar sobreescribir datos que aún no se han copiado.<br>**Si no hay solapamiento:** realizar la copia desde el inicio hacia el final, ya que no hay riesgo de sobreescribir datos. <br>5. **Retorno del resultado:** Devuelve un puntero al área de memoria de destino, permitiendo un uso en expresiones más complejas.     
