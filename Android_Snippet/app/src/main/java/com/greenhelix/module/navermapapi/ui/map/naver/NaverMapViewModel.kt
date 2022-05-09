package com.greenhelix.module.navermapapi.ui.map.naver

import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel

class NaverMapViewModel :ViewModel(){
    private val _sampleText = MutableLiveData<String>().apply {
        value = "HELLO MAP NAVER"
    }
    val sampleTest : LiveData<String> = _sampleText
}