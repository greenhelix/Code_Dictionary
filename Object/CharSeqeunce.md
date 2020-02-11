# CharSequence

charsequence는 인터페이스이다.
char값을 읽을 수 있느 시퀀스이다.
다양한 종류의 char시퀀스에 대해 균일한 읽기 전용 접근권한을 제공함.
string보다 훨 용이하게 변형 가공이 가능함.

**가공과 변형이 가능하다.**
스타일 문자 라고도 한다.

---

- charSequence to String

```java
CharSequence a = "some string";
String s = a.toString();
```

- String to charSequence

```java
String a = "some string";
CharSequence s = a;
```
