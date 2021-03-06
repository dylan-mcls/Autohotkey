[Variables]
@Include="#@#variables.inc"

[mCPU]
Measure=CPU
InvertMeasure=0

[mRAM]
Measure=PhysicalMemory
InvertMeasure=0

[mSWAP]
Measure=SwapMemory
InvertMeasure=0

[mUp]
Measure=NetOut

[mDown]
Measure=NetIn

[mPower]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent

[mTime]
Measure=Time
Format=%H:%M:%S
UpdateDivider=2

[mTimeH]
Measure=Time
Format=%H

[mTimeM]
Measure=Time
Format=%M
UpdateDivider=2

[mTimeS]
Measure=Time
Format=%S
UpdateDivider=2

[mYear]
Measure=Time
Format="%Y"

[mDate]
Measure=Time
Format=%d
Substitute="01":"1st","02":"2nd","03":"3rd","04":"4th","05":"5th","06":"6th","07":"7th","08":"8th","09":"9th","10":"10th","11":"11th","12":"12th","13":"13th","14":"14th","15":"15th","16":"16th","17":"17th","18":"18th","19":"19th","20":"20th","21":"21st","22":"22nd","23":"23rd","24":"24th","25":"25th","26":"26th","27":"27th","28":"28th","29":"29th","30":"30th","31":"31st","32":"wat"

[mMonth]
Measure=Time
Format=%B
Substitute="January":"JAN","February":"FEB","March":"MAR","April":"APR","May":"MAY","June":"JUN","July":"JUL","August":"AUG","September":"SEP","October":"OCT","November":"NOV","December":"DEC"

[mMonthFull]
Measure=Time
Format=%B

[mDay]
Measure=Time
Format=%A
Substitute="Monday":"Mon","Tuesday":"Tue","Wednesday":"Wed","Thursday":"Thu","Friday":"Fri","Saturday":"Sat","Sunday":"Sun"

[mDayFull]
Measure=Time
Format=%A

[mWeekHelp]
Measure=Time
Format=%U

[mWeek]
Measure=Calc
Formula=mWeekHelp + 1

[mDayOfYear]
Measure=Time
Format=%j

[mTimeZone]
Measure=Time
Format=%Z

[mUpTime]
Measure=UpTime
Format="%4!02i!:%3!02i!:%2!02i!:%1!02i!"

[mUpTimeHour]
Measure=UpTime
Format="%3!02i!"

[mCurrentWeather]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=1800
Url=https://wxdata.weather.com/wxdata/weather/local/#Location#?cc=*&unit=#Unit#&dayf=1
RegExp="(?siU).*<locale>(.*)</locale>.*<ut>(.*)</ut>.*<ud>(.*)</ud>.*<us>(.*)</us>.*<up>(.*)</up>.*<ur>(.*)</ur>.*<loc id="(.*)">.*<dnam>(.*)</dnam>.*<tm>(.*)</tm>.*<lat>(.*)</lat>.*<lon>(.*)</lon>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<zone>(.*)</zone>.*<cc>.*<lsup>(.*)</lsup>.*<obst>(.*)</obst>.*<tmp>(.*)</tmp>.*<flik>(.*)</flik>.*<t>(.*)</t>.*<icon>(.*)</icon>.*<bar>.*<r>(.*)</r>.*<d>(.*)</d>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<hmid>(.*)</hmid>.*<vis>(.*)</vis>.*<uv>.*<i>(.*)</i>.*<t>(.*)</t>.*<dewp>(.*)</dewp>.*<moon>.*<icon>(.*)</icon>.*<t>(.*)</t>.*<ppcp>(.*)</ppcp>.*"

[mIconWeather]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mCurrentWeather]
StringIndex=20

[mTemperature]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mCurrentWeather]
StringIndex=17

[mTempUnit]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mCurrentWeather]
StringIndex=2

[mLocation]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mCurrentWeather]
StringIndex=8

[mWeatherCondition]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mCurrentWeather]
StringIndex=19

[mSunrise]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mCurrentWeather]
StringIndex=12

[mSunset]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mCurrentWeather]
StringIndex=13

[mMoonphase]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mCurrentWeather]
StringIndex=33

[mDay1Weather]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=3600
Url=https://wxdata.weather.com/wxdata/weather/local/#Location#?cc=*&unit=#Unit#&dayf=2
RegExp="(?siU)<day d="1" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*"

[mIconWeatherDay1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay1Weather]
StringIndex=7

[mDayDay1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay1Weather]
StringIndex=1

[mDateDay1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay1Weather]
StringIndex=2

[mTempHighDay1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay1Weather]
StringIndex=3

[mTempLowDay1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay1Weather]
StringIndex=4

[mConditionDay1]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay1Weather]
StringIndex=8

[mDay2Weather]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=3600
Url=https://wxdata.weather.com/wxdata/weather/local/#Location#?cc=*&unit=#Unit#&dayf=3
RegExp="(?siU)<day d="2" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*"

[mIconWeatherDay2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay2Weather]
StringIndex=7

[mDayDay2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay2Weather]
StringIndex=1

[mDateDay2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay2Weather]
StringIndex=2

[mTempHighDay2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay2Weather]
StringIndex=3

[mTempLowDay2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay2Weather]
StringIndex=4

[mConditionDay2]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay2Weather]
StringIndex=8

[mDay3Weather]
Measure=Plugin
Plugin=Plugins\WebParser.dll
UpdateRate=3600
Url=https://wxdata.weather.com/wxdata/weather/local/#Location#?cc=*&unit=#Unit#&dayf=4
RegExp="(?siU)<day d="3" t="(.*)" dt="(.*)".*<hi>(.*)</hi>.*<low>(.*)</low>.*<sunr>(.*)</sunr>.*<suns>(.*)</suns>.*<part p="d">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*<part p="n">.*<icon>(.*)</icon>.*<t>(.*)</t>.*<wind>.*<s>(.*)</s>.*<gust>(.*)</gust>.*<d>(.*)</d>.*<t>(.*)</t>.*<bt>(.*)</bt>.*<ppcp>(.*)</ppcp>.*<hmid>(.*)</hmid>.*"

[mIconWeatherDay3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay3Weather]
StringIndex=7

[mDayDay3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay3Weather]
StringIndex=1

[mDateDay3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay3Weather]
StringIndex=2

[mTempHighDay3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay3Weather]
StringIndex=3

[mTempLowDay3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay3Weather]
StringIndex=4

[mConditionDay3]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[mDay3Weather]
StringIndex=8

[mAudio]
Measure=Plugin
Plugin=Win7AudioPlugin
UpdateDivider=1

[mPercent]
Measure=Calc
Formula=((100 >= mAudio) && (66 <= mAudio) ? 3 : ((66 >= mAudio) && (33 <= mAudio) ? 2 : ((33 >= mAudio) && (0 <= mAudio) ? 1 : 0)))
DynamicVariables=1
UpdateDivider=1

[mBinSize]
Measure=Plugin
Plugin=RecycleManager
RecycleType=Size

[mBinItem]
Measure=Plugin
Plugin=RecycleManager
RecycleType=Count

[mHDD1]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#Drive1#
IgnoreRemovable=0

[mHDD2]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#Drive2#
IgnoreRemovable=0

[mHDD3]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#Drive3#
IgnoreRemovable=0

[mHDD1T]
Measure=FreeDiskSpace
Drive=#Drive1#
IgnoreRemovable=0
Total=1

[mHDD2T]
Measure=FreeDiskSpace
Drive=#Drive2#
IgnoreRemovable=0
Total=1

[mHDD3T]
Measure=FreeDiskSpace
Drive=#Drive3#
IgnoreRemovable=0
Total=1

[mOS]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_VERSION

[mBits]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_BITS

[mWANIP]
Measure=Plugin
Plugin=WebParser.dll
Url=http://checkip.dyndns.org
UpdateRate=21600
RegExp="(?siU)<body>Current IP Address: (.*)</body>"
StringIndex=1
Substitute="":"..."