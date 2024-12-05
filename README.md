# Task #PC3: Practica Calificada 3  
**course:** Programación III  
**unit:** 6  
**cmake project:** prog3_pc3_TEO1_v2024_2
## Indicaciones Específicas
- El tiempo límite para la evaluación es 100 minutos.
- Cada pregunta deberá ser respondida en un archivo cabecera (`.h`) con el número de la pregunta:
    - `are_permutations.h`
    - `minimize_merge_time.h`
- Deberás subir estos archivos directamente a [www.gradescope.com](https://www.gradescope.com) o se puede crear un `.zip` que contenga todos ellos y subirlo.

## Question #1 - `merge` (10 points)

Implementa una función en C++ llamada `minimize_merge_time` que reciba un vector de enteros representando los tamaños de los archivos y devuelva el tiempo total mínimo necesario para mezclar todos los archivos en uno solo.  

## Requisitos
- Utiliza un Min Heap para realizar las operaciones.
- Cada vez que combines dos archivos, agrega su costo (suma de sus tamaños) al tiempo total.
- Continúa combinando archivos hasta que quede uno solo en el heap.
  
Ejemplo:

```cpp
std::vector<int> file_sizes = {40, 20, 10, 30};
```

- Ordena implícitamente en el heap: {10, 20, 30, 40}.
- Combina los dos archivos más pequeños: 10 + 20 = 30. Tiempo acumulado: 30.
  Inserta el nuevo archivo en el heap: {30, 30, 40}.
- Combina los dos archivos más pequeños: 30 + 30 = 60. Tiempo acumulado: 90.
  Inserta el nuevo archivo en el heap: {40, 60}.
- Combina los dos archivos más pequeños: 40 + 60 = 100. Tiempo acumulado: 190.

**Use Case #1:**
```cpp
std::vector<int> file_sizes = {10, 40, 20, 30};
std::cout << minimize_merge_time(file_sizes); // 190
```

**Use Case #2:**
```cpp
std::list<int> file_sizes = {50};
std::cout << minimize_merge_time(file_sizes); // 0
```

**Use Case #3:**
```cpp
std::deque<int> file_sizes = {5, 5, 5, 5};
std::cout << minimize_merge_time(file_sizes); // 40
```

**Use Case #4:**
```cpp
std::map<string, int> file_sizes = {{"file_1.txt", 5}, {"file_2.txt", 5}, {"file_3.txt", 5}, {"file_4.txt", 5}};
std::cout << minimize_merge_time(file_sizes, [](auto item) { return item.second; });  // 40
```

## Question #2 - permutaciones (10 points)

Implementa una función template llamada `are_permutations` que reciba una cadena base y un número variable de cadenas adicionales para determinar si todas las cadenas proporcionadas son permutaciones entre sí.

## Requisitos
- Dos cadenas son consideradas permutaciones si contienen exactamente los mismos caracteres con las mismas frecuencias, aunque el orden de los caracteres sea diferente.
- La función debe utilizar una tabla hash para comparar las frecuencias de caracteres de las cadenas.
- Si alguna de las cadenas no cumple con la condición de ser una permutación, la función debe retornar false.

**Use Case #1:**
```cpp
std::cout << std::boolalpha << are_permutations<std::string>("listen", "silent", "enlist"); // true
```

**Use Case #2:**
```cpp
std::cout << std::boolalpha << are_permutations<std::string>("listen", "hello"); // false
```

**Use Case #3:**
```cpp
std::cout << std::boolalpha << are_permutations<std::wstring>(L"abc", L"cab", L"bac", L"cba"); // true
```

**Use Case #4:**
```cpp
std::cout << std::boolalpha << ar_permutations<std::wstring>(L"a", L"aa", L"aaa"); // false
```
