package com.greenhelix.module.navermapapi.ui.map.naver

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.lifecycle.ViewModelProvider
import com.greenhelix.module.navermapapi.databinding.FragmentMapNaverBinding

class NaverMapApiFragment : Fragment(){

    private lateinit var  naverMapViewModel : NaverMapViewModel
    private var _binding : FragmentMapNaverBinding? = null
    private val binding get() = _binding!!

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        naverMapViewModel = ViewModelProvider(this)[NaverMapViewModel::class.java]
        _binding = FragmentMapNaverBinding.inflate(inflater, container, false)
        val root : View = binding.root

        return root
    }
}