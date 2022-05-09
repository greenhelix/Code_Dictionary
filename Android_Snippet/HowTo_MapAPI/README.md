# Naver Map API 환경설정

## 1. Gradle 처리

> (1) project : gradle을 확인한다.<br>
> 가이드의 사항에는 allprojects 부분에 해당 문구를 추가하라고 한다.

build.gradle : project

```Gradle
//...
allprojects {
    repositories {
        google()
        mavenCentral()
        jcenter()
        maven {
            url 'https://naver.jfrog.io/artifactory/maven/'
        }
    }
}
//...
```

### ✅ Sync Now Click !!⚒️

<br>

> 그러나, Sync 가 안되는 경우도 있다. <br>혹은 allprojects 자체가 안된다고 뭐라 뭐라 한다. <br> 이러한 경우 settings.gradle 파일로 이동하여 해당 문구를 추가해줘야 한다.

settings.gradle

```Gradle
//위에 코드가 있을 수도 있고 없을 수도 있다.
dependencyResolutionManagement {
    repositoriesMode.set(RepositoriesMode.FAIL_ON_PROJECT_REPOS)
    repositories {
        google()
        mavenCentral()
        jcenter() // Warning: this repository is going to shut down soon
        maven {
            url 'https://naver.jfrog.io/artifactory/maven/'
        }
    }
}
rootProject.name = "HowToMapAPI"
include ':app'
```

> (2) app : gradle을 확인한다. <br>
> 네이버 지도 의존성을 추가해준다. 이게 잘 되야 사용할 수 있다.

build.gradle : app

```Gradle
//...

dependencies {
    implementation 'com.naver.maps:map-sdk:3.14.0'
    //...
}

//...
```

### ✅ Sync Now Click !!⚒️

<br>

> (3) 위의 sync 가 안된다면? <br>
> 큰일 난거다. (ㅈ됐다.)<br>
> 천천히 여러 작업을 해줘본다. <br>

> ❓ gradle.properties 를 조져본다.

```properties
android.useAndroidX=true
android.enableJetifier=true
```

> 위의 코드가 입력되어 있는지 확인.

### ✅ Sync Now Click !!⚒️

<br>

> 안된다? 마지막이다.<br>
> Android Studio 를 껐다 켜본다. <br>
> Refactor -> Migrate AndroidX 를 해본다. (백업? 그딴건 개나줘라)

### ✅ Sync Now Click !!⚒️

## 대충 이정도면 웬만하면 정상적으로 가져온다.

> 위의 방법에도 안된다? 그냥 새로 다시 해보자
>
> 새롭게 프로젝트를 시작해보자 <br>
> 프로젝트 생성시 Use legacy android.support libaries 을 활성화한 뒤
> 새로 만들어본다. <br>
> 이제 옛날 android 시절 빌드가 되어있다. <br>
> 이제 다시 위의 방법 1번부터 다시 해본다.
