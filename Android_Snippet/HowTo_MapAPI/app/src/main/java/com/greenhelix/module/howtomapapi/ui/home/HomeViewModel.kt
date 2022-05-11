package com.greenhelix.module.howtomapapi.ui.home

import android.graphics.Color
import androidx.fragment.app.Fragment
import androidx.lifecycle.ViewModel
import com.greenhelix.module.howtomapapi.R
import com.naver.maps.geometry.LatLng
import com.naver.maps.map.*
import com.naver.maps.map.overlay.Marker
import com.naver.maps.map.util.MarkerIcons

class HomeViewModel : ViewModel(), OnMapReadyCallback {

//    private val _text = MutableLiveData<String>().apply {
//        value = "This is home Fragment"
//    }
//    val text: LiveData<String> = _text

    fun createMap(frag : Fragment){
        val mapFragment = frag.childFragmentManager.findFragmentById(R.id.map_naver_frag) as MapFragment?
            ?: MapFragment.newInstance(
                NaverMapOptions().camera(
                    CameraPosition(
                        NaverMap.DEFAULT_CAMERA_POSITION.target,
                        NaverMap.DEFAULT_CAMERA_POSITION.zoom,
                        30.0,
                        45.0
                    )
                )
            ).also {
                frag.childFragmentManager.beginTransaction().add(R.id.map_naver_frag, frag).commit()
            }
        mapFragment.getMapAsync(this)
    }

    override fun onMapReady(naverMap: NaverMap) {
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