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
| [ft_strlcpy](https://github.com/PajaritoCantor/Libft/blob/main/ft_strlcpy.c) | **Descripción**:<br> Esta función copia una cadena de caracteres en otra, asegurando que la nueva siempre termine con un carácter nulo. <br> Su diseño evita desbordamientos de memoria al respetar un límite máximo de caracteres a copiar <br> Si el límite es cero, no se realiza ninguna copia y solo se devuelve la longitud de la cadena original. <br> El valor de retorno indica cuántos caracteres tenía la cadena de origen, permitiendo saber si la copia fue completa o si hubo truncamiento. <br> <br> **Funcionamiento:** <br>1. Se obtiene la longitud de la cadena de origen <br> 2. Si la copia es posible, se transfieren los carácteres hasta alcanzar el límite establecido, dejando siemrpe espacio para la terminación nula. <br> 3. Al finalizar la copia, se garantiza que la cadena resultante termine correctamente. <br> 4. Se devuelve la longitud total de la cadena de origen, lo que permite al usuario conocer si la operación conservó la totalidad del contenido o si fue recortada.<br><br>📌**Detalles clave:** <br> - La copia solo se realiza si hay espacio disponible.<br>- Si el límite de caracteres es menor que la longitud de la cadena de origen, solo se copian los caracteres permitidos y el resto se descarta.<br>- La terminación con carácter nulo es obligatoria para evitar accesos indebidos a memoria.<br>- Incluso si la copia no es completa, la longitud original de la cadena de origen sigue siendo retornada para facilitar su manejo. |

| **Función** | **Descripción y Funcionamiento** |
|-------------|----------------------|
|ft_memmove | **Descripción**: La función `memmove()` copia `n bytes` del área de memoria `src` al área de memoria `dest`. <br>Las áreas de memoria pueden solaparse: la copia se realiza como si los bytes en `src` se copiaran primero en una matriz temporal que no se solapara con `src` o `dest`, y luego los bytes se copian de la matriz temporal a `dest`. <br>La función `memmove()` devuelve un puntero a `dest`.<br><br>**Funcionamiento:** <br>1. **Verificación de entradas:** Asegurarse de que las áreas de memoria de origen y destino sean válidas antes de realizar cualquier operación.<br>2. **Preparación para la copia** Convertir las áreas de memoria a un formato que permita la manipulación byte a byte.<br>3. **Detección de solapamiento** Determinar si las áreas de memoria de origen y destino se superponen. Esto es crucial para decidir la dirección en la que se realizará la copia.<br>4. **copia segura**: **Si hay solapamiento:** Realizar la copia desde el final hasta el inicio para evitar sobreescribir datos que aún no se han copiado.<br>**Si no hay solapamiento:** realizar la copia desde el inicio hacia el final, ya que no hay riesgo de sobreescribir datos. <br>5. **Retorno del resultado:** Devuelve un puntero al área de memoria de destino, permitiendo un uso en expresiones más complejas.     

| **Función** | **Descripción y Funcionamiento** |
|-------------|-----------------------------------|
| **ft_strlcat** | **Descripción:** <br> 1. Esta función permite añadir el contenido de una segunda cadena al final de una primera, asegurando que no se sobrepase el espacio disponible en el área de memoria reservada para la primera cadena.<br> 2. A diferencia de otras funciones similares, esta implementación limita la cantidad de caracteres copiados y siempre garantiza que la cadena resultante esté correctamente terminada con un carácter especial de finalización.<br> 3. Además, devuelve un valor que indica la longitud total que habría tenido la cadena si no se hubiese restringido la cantidad de caracteres copiados.<br><br> **Funcionamiento:** <br> 1. Se obtiene la cantidad de caracteres de cada una de las cadenas involucradas para determinar cuánto contenido hay en ambas.<br> 2. Si el espacio disponible para la primera cadena es inexistente, la función no puede realizar ninguna operación y solo devuelve la cantidad de caracteres que se pretendía agregar.<br> 3. Si la primera cadena ya ocupa más espacio del permitido, se retorna la suma de la cantidad de caractereses de ambas cadenas, indicando cuál habría sido el tamaño final si no existiera una restricción de espacio.<br> 4. Se ajusta el puntero de la primera cadena para situarse en su posición final, reduciendo el tamaño disponible en consecuencia.<br> 5. Se copian los caracteres de la segunda cadena al final de la primera, siempre que quede espacio y sin sobrepasar el límite permitido.<br> 6. Tras la adición de los caracteres permitidos, se coloca un carácter especial de finalización en la primera cadena para mantener su validez. <br> 7. Finalmente, se retorna la longitud total que la primera cadena habría tenido sin la restricción de espacios, permitiendo determinar si la operación se llevó a cabo completamente o si parte del contenido quedó truncado. |
