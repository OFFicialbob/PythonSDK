from ctypes import *
import BL2SDK


class FEnvironmentalEffectInfo(Structure):
    pass


class TArray_FEnvironmentalEffectInfo(Structure):
    _fields_ = [
        ("Data", POINTER(FEnvironmentalEffectInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAkEventTrackKey(Structure):
    pass


class TArray_FAkEventTrackKey(Structure):
    _fields_ = [("Data", POINTER(FAkEventTrackKey)), ("Count", c_int), ("Max", c_int)]


class FEnvironmentalEffectSetting(Structure):
    pass


class TArray_FEnvironmentalEffectSetting(Structure):
    _fields_ = [
        ("Data", POINTER(FEnvironmentalEffectSetting)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FRTPCSetting(Structure):
    pass


class TArray_FRTPCSetting(Structure):
    _fields_ = [("Data", POINTER(FRTPCSetting)), ("Count", c_int), ("Max", c_int)]


class FOccludedVolume(Structure):
    pass


class TArray_FOccludedVolume(Structure):
    _fields_ = [("Data", POINTER(FOccludedVolume)), ("Count", c_int), ("Max", c_int)]


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *
from ..structs.GFxUI import *
from ..structs.GearboxFramework import *
from ..structs.WillowGame import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.GearboxFramework import *
from ..classes.WillowGame import *
from ..classes.AkAudio import *


def init():
    FEnvironmentalEffectInfo._fields_ = [("EffectID", c_int), ("Volume", c_float)]

    FAkEventTrackKey._fields_ = [("Time", c_float), ("Event", POINTER(UAkEvent))]

    FEnvironmentalEffectSetting._fields_ = [
        ("Effect", POINTER(UAkEffect)),
        ("Volume", c_float),
        ("FadeDistance", c_float),
        ("MinDistance", c_float),
        ("MaxDistance", c_float),
    ]

    FRTPCSetting._fields_ = [
        ("Target", POINTER(AActor)),
        ("AkRtpc", POINTER(UAkRtpc)),
        ("ValueAtMaxRange", c_float),
        ("ValueWithinVolume", c_float),
        ("FadeDistance", c_float),
        ("LastEvalValue", c_float),
    ]

    FOccludedVolume._fields_ = [
        ("SoundVolume", POINTER(AWwiseSoundVolume)),
        ("Target", FScriptInterface),
        ("MaxOcclusion", c_float),
        ("FadeDistance", c_float),
        ("bFadeIn", c_bool, 1),
        ("bExternalFade", c_bool, 1),
    ]
