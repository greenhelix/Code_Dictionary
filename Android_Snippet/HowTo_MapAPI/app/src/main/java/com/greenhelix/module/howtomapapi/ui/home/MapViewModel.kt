package com.greenhelix.module.howtomapapi.ui.home

import android.graphics.Color
import android.util.Log
import androidx.lifecycle.ViewModel
import com.naver.maps.geometry.LatLng
import com.naver.maps.map.CameraPosition
import com.naver.maps.map.MapFragment
import com.naver.maps.map.NaverMap
import com.naver.maps.map.OnMapReadyCallback
import com.naver.maps.map.overlay.Marker
import com.naver.maps.map.util.FusedLocationSource
import com.naver.maps.map.util.MarkerIcons

class MapViewModel : ViewModel(), OnMapReadyCallback  {

//    private val _text = MutableLiveData<String>().apply {
//        value = "This is home Fragment"
//    }
//    val text: LiveData<String> = _text
    private lateinit var locationSource: FusedLocationSource

    fun getMyPos(fragment: NaverMapFragment){
        Log.d("Ik", "getMyPos")
        locationSource = FusedLocationSource(fragment, 1000 )

    }

    // 지도에 표기한 옵션이나 객체를 동기화 해주는 함수이다.
    fun mapAsync(mapFrag : MapFragment?){
        mapFrag?.getMapAsync(this)
    }

    override fun onMapReady(naverMap: NaverMap) {
        Log.d("Ik", "mapOptions")

        naverMap.locationSource = locationSource

        naverMap.cameraPosition = CameraPosition(NaverMap.DEFAULT_CAMERA_POSITION.target, NaverMap.DEFAULT_CAMERA_POSITION.zoom, 37.0, 45.0)

        naverMap.uiSettings.isCompassEnabled = true

        naverMap.uiSettings.isLocationButtonEnabled = true

        Marker().apply {
            position = LatLng(37.5670135, 126.9783740)
            map = naverMap
        }

        Marker().apply {
            position = LatLng(37.57000, 126.97618)
            icon = MarkerIcons.BLACK
            angle = 315f
            map = naverMap
        }

        Marker().apply {
            position = LatLng(37.56500, 126.9783881)
            icon = MarkerIcons.BLACK
            iconTintColor = Color.RED
            alpha = 0.5f
            map = naverMap
        }
    }
}