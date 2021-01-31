# Async

여러 프로그램 적 테스크 처리에서 효율을 끌어올리는 방법이
async programming이다.

**Asynchronous programming --- 비동기 프로그래밍**
--> **Async** 라고 보통 얘기함.

1. Future api 사용

   > > future obj 를 가져온다. --> 얘는 따로 테스크를 넣어주고 일을 시킨다.
   > > future는 알아서 하고 있다가 완료 되면 결과가 뜬다.
   > > 나머지 task를 처리를 한다.
   > > 완료되지 않은 오브젝트 상태/ 작업끝난 상태(에러) // (완료)

2. Await 사용
   > > 만약 future작업이 완료되고 나서 테스크를 진행하고 싶으면, await을 사용해서 사용한다.

## Asynchronous programming - future & async - await

- 다트 코드는 단일 thread 에서 실행
- thread를 차단하는 코드는 프로그램을 정지시킬 수 있다.
- thread는 파이프라고 생각하면 된다. (일이 쌓이는 큐같은 상태의 파이프임)
- future는 async코드의 결과를 나타낸다. 처리또는 입출력은 나중에 완료된다.
- async가 완료 될 때까지 실행을 일시 중단하려면 async함수에서 await을 사용하면된다.
- 코드를 동시에 실행하려면 isolate을 만든다.

---

- future는 보통 오래걸리는 작업을 수행한다.
- 이 때, 그 작업이 완료되기까지 기다릴지 아닐지 고를수 있다. (await과 future)로 구분된다고 보면됨.

```dart
void printDailyNewsDigest(){
    var newsDigest = gatherNewsReports();
    print(newsDigest);
}
main() {
    printDailyVewsDigest();
    printWinningLotteryNumbers();
    printWeatherForecast();
    printBaseballScore();
}
```

> > --> future 를 사용해서 변화를 시켜주면.

```dart
import 'dart:async';

void printDailyVewsDigest() async {
  var newsDigest = await gatherNewsReports();
  print(newsDigest);
}

main() {
    printDailyVewsDigest();
    printWinningLotteryNumbers();
    printWeatherForecast();
    printBaseballScore();
}

printWinningLotteryNumbers(){
  print('Winning lotto numbers: [23, 63, 87, 26, 2]');
}

printWeatherForecast(){
    print('Tomorrow forecast: 34degree, sunny');
}

printBaseballScore(){
      print('Baseball score: red sox 10, yankees 0');
}
const news = '<gathered news goes here>';
const oneSecond = Duration(seconds: 1);

Future<String> gatherNewsReports() =>Future.delayed(oneSecond, ()=>news);
```

> > 출력화면
> > Winning lotto numbers: [23, 63, 87, 26, 2]
> > Tomorrow forecast: 34degree, sunny
> > Baseball score: red sox 10, yankees 0
> > <gathered news goes here>

> > try catch사용시

```dart
void printDailyVewsDigest() async {
 try{
  var newsDigest = await gatherNewsReports();
  print(newsDigest);
 }catch(e){
   print(e.toString());
 }
}
```

> > async/await없이 사용하기

```dart
void printDailyVewsDigest()  {

  var newsDigest =  gatherNewsReports();
  newsDigest.then((value)=>{
    print(value)
  });

}
```

**이 코드는 value가 코드안에 갇혀있어서,, 밖에서 접근이 불가능하다. 이런 특징이 있음**
