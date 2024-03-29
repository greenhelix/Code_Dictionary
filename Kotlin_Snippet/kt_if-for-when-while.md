# Kotlin

## 반복문

1.  for문으로 처리

    - for ()

    ```kotlin
        for(i in 1 until 10){}          // 1 부터 1씩증가, 9 까지 반복
        for(i in 1..10 ){}              // 1 부터 1씩증가, 10까지 반복
        for(i in 1..10 step 2){}        // 1 부터 2씩증가, 10까지 반복
        for(i in 10 downTo 1){}         // 10부터 1씩감소, 1 까지 반복
        for(i in 10 downTo 1 step 2){}  // 10부터 2씩감소, 1 까지 반복
    ```

    > forEach{}

## 조건문

- if
- when

## 배열

1. Array

   - 배열이름.sort()

   ```kotlin
   var intArray = intArrayOf(3,2,1,0)
   println(intArray.joinToString()) // 3,2,1,0
   intArray.sort()
   println(intArray.joinToString()) // 0,1,2,3
   ```

2. Set

> sortedSetOf()
> [method](https://docs.oracle.com/javase/8/docs/api/java/util/SortedSet.html)
> 자동 오름차순 정렬을 해주는 Set이다.

```kotlin
    val a = sortedSetOf<Int>()
    a.add(3)
    a.add(2)
    a.add(1)
    println(a) //[1,2,3]
    println(a.first()) //1
    println(a.last()) //3
```

set의 모든 메서드는 상속받고, first, last 메서드를 추가된다.

## 객체

1. 단항 산술 연산자

   - ++, --, +, -
     자바와 동일하게 사용되는것으로 보임.
