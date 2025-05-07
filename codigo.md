# RESPUESTAS PREGUNTAS

## PREGUNTA  1)
 **Explique qué cosas del código fuente indican que la clase es una clase abstracta**
R// Lo que indica que es una clase abstracta es cuando se tiene minimo una funcion virtual pura, que es cuando se termina de la forma "= 0", Como en el caso de virual void jugar() =0;


## PREGUNTA  2)
**¿Qué implicaciones tiene esa decisión de diseño para este programa?. Explique**
R// Gracias a esto, al diseñar la clase de forma abstracta, nos sirve para definir diferentes tipos de juegos dentro de la clase Juego, obligandonos a usar polimorfisco y herencia (temas que vemos en clase), para crear diferentes clases de otros juegos que heredan la clase juego, en este caso es apropiada ya que como es un casino, se encuentran DIFERENTES JUEGOS.