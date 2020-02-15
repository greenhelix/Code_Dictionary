# Arrays

- java.util.Arrays class
- [참고사이트](https://www.tutorialspoint.com/java/util/java_util_arrays.htm)

## Method

1. deepToString(배열)
   > 배열을 출력할 때 사용한다.

```java
    int [] a = {1,2,3,4,5};
    System.out.pritnln(Arrays.deepToString(a));
    // out>>  [1,2,3,4,5]
```

2. equals(배열, 배열)
   > 같은 형의 배열 2개를 서로 같은지 비교해주는 메서드이다. 리턴값은 t/f 로 나눠진다.

```java
     int [] a = {1,2,3,4,5};
     int [] b = {1,2,3,4,5};
     int [] c = {1,2,3,4};
    System.out.pritnln(Arrays.equeals(a,b)); // true
    System.out.pritnln(Arrays.equeals(a,c)); // false
```

3. fill(배열, 채우고 싶은것)

- 1. fill(배열, 객체)
     > 어떤 불린 배열에서 특정형태의 객체로 채워주는 메서드이다.

```java
    boolean [] a = {true, false, false};
    Arrays.fill(a, true);
    System.out.println(Arrays.toString(a));
    // [true, true, true]
    int [] a = {1, 2, 4};
    Arrays.fill(a, 5);
    System.out.println(Arrays.toString(a));
    // [5, 5, 5]
```

- 2. fill(배열,시작idx, 끝idx, 객체)
     > 특정 인덱스 부분만 t/f값으로 채우고 싶을때.

```java
    int [] a = {1, 2, 4,7,8,9,10};
    Arrays.fill(a,1, 4, 5);
    System.out.println(Arrays.toString(a));
    // [1,5,5,5,5,9,10]
```

4. hashCode(배열)

   > 주어진 배열의 해시코드를 넣어주는 메서드이다.

   > > [Arrays.java참고]()

5.
