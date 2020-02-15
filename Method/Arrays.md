# Arrays

- java.util.Arrays class
- [참고사이트](https://www.tutorialspoint.com/java/util/java_util_arrays.htm)

## Method

1. toString() //deepToString()

   > 배열을 출력할 때 사용한다.

   - 1. toString()
   - 2. deepToString()
        > > deepto는 List나 다른 것들, 즉 다차원 배열을 출력할때 사용한다..

```java
    int [] a = {1,2,3,4,5};
    int[][] b = {{2,1},{3,3,3}};

    System.out.pritnln(Arrays.toString(a));
    System.out.pritnln(Arrays.deepToString(b));
    // out>>  [1,2,3,4,5]
    // out>>  [[2,1],[3,3,3]]

```

2. equals(arr, arr)
   > 같은 형의 배열 2개를 서로 같은지 비교해주는 메서드이다. 리턴값은 t/f 로 나눠진다.

```java
     int [] a = {1,2,3,4,5};
     int [] b = {1,2,3,4,5};
     int [] c = {1,2,3,4};
    System.out.pritnln(Arrays.equeals(a,b)); // true
    System.out.pritnln(Arrays.equeals(a,c)); // false
```

3. fill(arr, obj)

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

4. hashCode()

   > 주어진 배열의 해시코드를 넣어주는 메서드이다.

   > > [Arrays.java참고](https://github.com/greenhelix/JAVA-Dictionary/blob/master/Method/Arrays.java)

5. sort()
   > 기본적으로 sort 메서드는 오름차순으로 정렬을 한다.

- 1. sort(arr)

```java
    int [] a = {1, 2, 10, 7, 8, 9, 4};
    Arrays.sort(a);
    System.out.println(Arrays.toString(a));
    // [1, 2, 4, 7, 8, 9, 10]
```

- 2. sort(arr, 시작idx, 끝idx)

```java
    int [] a = {1, 2, 10, 7, 8, 9, 4};
    Arrays.sort(a,1, 4);
    System.out.println(Arrays.toString(a));
    // [1, 2, 7, 8, 10, 9, 4]
```

- 3. sort(arr, comparator<> obj)
     > 특정 컴퍼레이터(비교값)의 객체를 선언해준다.
     > 그리고나서 그것의 규칙대로, arr의 오름차순을 내림차순으로 간단히 바꿀수도 있다.

```java
    Integer arr[]  = new Integer[]{2,3,5,7,8,10};
    Comparator<Integer> comp = Collections.reverseOrder();
    Arrays.sort(arr, comp);
    // [10,8,7,5,3,2,1]
```

6. copyOf(), copyOfRange()

   - 1. copyOf()
        > 복사. null값 허용.
        > 범위를 넘어서 설정할경우

```java
    int[] arr1 = new int[] {11, 22, 33, 44};
    int[] arr2 = Arrays.copyOf(arr1, 10);
    System.out.println(Arrays.toString(arr2));
    // copyOf>>> [11, 22, 33, 44, 0, 0, 0, 0, 0, 0]

    Integer[] intarr1 = new Integer[] { 11, 22, 33, 44 };
    Integer[] intarr2 = Arrays.copyOf(intarr1, 10);
    System.out.println("Integer>>copyOf>>> " + Arrays.toString(intarr2));
    // Integer>>copyOf>>> [11, 22, 33, 44, null, null, null, null]

    char[] char1 = new char[] { 'a', 'b', 'v', 'c' };
    char[] char2 = Arrays.copyOf(char1, 10);
    System.out.println("charCOPY>>> " + Arrays.toString(char2));
    // charCOPY>>> [a, b, v, c,  ,  ,  ,  ,  ,  ]

```

- 2.  copyOfRange()
      > 원하는 범위만큼 복사.

```java
    int[] arr1 = new int[] {11, 22, 33, 44};
    int[] arr3 = Arrays.copyOfRange(arr1, 0, 6);
    System.out.println("copyOfRange>>> " + Arrays.toString(arr3));
    // copyOfRange>>> [11, 22, 33, 44, 0, 0]
```

7. asList()
   >

```java

```
