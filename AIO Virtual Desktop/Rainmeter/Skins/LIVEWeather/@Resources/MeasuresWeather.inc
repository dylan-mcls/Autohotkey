; © 2020 by xxenium


[FORECASuperParent]
Measure=WebParser
URL=#URL#
UpdateRate=10000
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:81.0) Gecko/20100101 Firefox/81.0
DecodeCharacterReference=1
LogSubstringErrors=0
RegExp=(?siU)^(.*)$
StringIndex=1
FinishAction=[!EnableMeasureGroup Parents]




; ========================================
;                 CURRENT WEATHER
; ========================================


[MeasureCurrentWeatherHTML]
Measure=WebParser
Group=Parents
URL=[FORECASuperParent]
Disabled=1
StringIndex=1
RegExp=#CurrentWeatherHTML#
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Time][!EnableMeasureGroup Counters][!UpdateMeasure MeasureSetCounter]

[MeasureCity]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=1

[MeasureTemp]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=2
Substitute="°":"","+":""

[MeasureTempImperial]
Measure=Calc
Formula=Round((9/5*MeasureTemp)+32)

[MeasureTempMetric]
Measure=Calc
Formula=Round((5/9)*(MeasureTemp-32))

[MeasureFeelsLikeLabels]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=3

[MeasureFeelsLike]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=4
Substitute="°":"","+":""

[MeasureFeelsLikeImperial]
Measure=Calc
Formula=Round((9/5*MeasureFeelsLike)+32)

[MeasureFeelsLikeMetric]
Measure=Calc
Formula=Round((5/9)*(MeasureFeelsLike-32))

[MeasureIcon]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=5
IfMatch=(?i)d0.*|d1.*|d2.*|d3.*|d5.*|d6.*
IfMatchAction=[!SetVariable ShapeFill "#DayColor#"]
IfMatch2=(?i)d4.*
IfMatchAction2=[!SetVariable ShapeFill "#OvercastColor#"]
IfMatch3=(?i)n.*
IfMatchAction3=[!SetVariable ShapeFill "#NightColor#"]

[MeasureWindDir]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=6

[MeasureWindDir2]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=6
Substitute=#WindDirection#

[MeasureWindSpeed]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=7

[MeasureWindSpeedImperial]
Measure=Calc
Formula=(MeasureWindSpeed/1.609344)

[MeasureWindSpeedImperialUK]
Measure=Calc
Formula=(MeasureWindSpeed/1.609344)

[MeasureWindSpeedMetric]
Measure=Calc
Formula=(MeasureWindSpeed*1.609344)

[MeasureGustLabels]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=8

[MeasureGustSpeed]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=9

[MeasureGustSpeedImperial]
Measure=Calc
Formula=(MeasureGustSpeed/1.609344)

[MeasureGustSpeedImperialUK]
Measure=Calc
Formula=(MeasureGustSpeed/1.609344)

[MeasureGustSpeedMetric]
Measure=Calc
Formula=(MeasureGustSpeed*1.609344)

[MeasureCondition]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=10

[MeasureHumidity]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=11

[MeasureHumidityLabels]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=12

[MeasurePressure]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=13

[MeasurePressureImperial]
Measure=Calc
Formula=(MeasurePressure*0.029530)

[MeasurePressureImperialUS]
Measure=Calc
Formula=(MeasurePressure*0.029530)

[MeasurePressureLabels]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=14


[MeasureSunriseTime]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=15

[MeasureSunriseTimeImperial]
Measure=Time
TimeStamp=[MeasureSunriseTime]
TimeStampFormat=%H:%S
Format=%#I:%S %p
DynamicVariables=1
Group=Time
Disabled=1

[MeasureSunriseLabels]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=16

[MeasureDayLength]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=17

[MeasureSunsetTime]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=18

[MeasureSunsetTimeImperial]
Measure=Time
TimeStamp=[MeasureSunsetTime]
TimeStampFormat=%H:%S
Format=%#I:%S %p
DynamicVariables=1
Group=Time
Disabled=1

[MeasureSunsetLabels]
Measure=WebParser
Url=[MeasureCurrentWeatherHTML]
StringIndex=19

[MeasureCurrentWeatherDAYPART]
Measure=WebParser
Group=Parents
URL=[FORECASuperParent]
Disabled=1
StringIndex=1
RegExp=#CurrentWeatherDayPart#
LogSubstringErrors=0

[MeasureMorningIcon]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=1

[MeasureMorningCondition]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=1
Substitute=#Symbols#
DynamicVariables=1

[MeasureMorningTemp]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=2

[MeasureMorningTempImperial]
Measure=Calc
Formula=Round((9/5*MeasureMorningTemp)+32)

[MeasureAfternoonIcon]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=3

[MeasureAfternoonCondition]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=3
Substitute=#Symbols#
DynamicVariables=1

[MeasureAfternoonTemp]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=4

[MeasureAfternoonTempImperial]
Measure=Calc
Formula=Round((9/5*MeasureAfternoonTemp)+32)

[MeasureEveningIcon]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=5

[MeasureEveningCondition]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=5
Substitute=#Symbols#
DynamicVariables=1

[MeasureEveningTemp]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=6

[MeasureEveningTempImperial]
Measure=Calc
Formula=Round((9/5*MeasureEveningTemp)+32)

[MeasureOvernightIcon]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=7

[MeasureOvernightCondition]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=7
Substitute=#Symbols#
DynamicVariables=1

[MeasureOvernightTemp]
Measure=WebParser
Url=[MeasureCurrentWeatherDAYPART]
StringIndex=8

[MeasureOvernightTempImperial]
Measure=Calc
Formula=Round((9/5*MeasureOvernightTemp)+32)


; ========================================
;              DAILY FORECAST
; ========================================


[MeasureDailyForecast]
Measure=WebParser
Group=Parents
URL=[FORECASuperParent]
Disabled=1
StringIndex=1
RegExp=#DailyForecast#
LogSubstringErrors=0
FinishAction=[!EnableMeasureGroup Time]

[MeasureFDate1]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=1

[MeasureFDay1]
Measure=Time
TimeStamp=[MeasureFDate1]
TimeStampFormat=%Y-%m-%d
Format=%a #DateFormat#
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFDay1Short]
Measure=Time
TimeStamp=[MeasureFDate1]
TimeStampFormat=%Y-%m-%d
Format=%a
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFDay1Long]
Measure=Time
TimeStamp=[MeasureFDate1]
TimeStampFormat=%Y-%m-%d
Format=%A
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFIcon1]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=2

[MeasureFCondition1]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=2
Substitute=#Symbols#
DynamicVariables=1

[MeasureFTempMin1]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=3

[MeasureFTempMin1Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMin1)+32)

[MeasureFTempMax1]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=4

[MeasureFTempMax1Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMax1)+32)

[MeasureFPrecipChance1]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=5

[MeasureFDate2]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=6

[MeasureFDay2]
Measure=Time
TimeStamp=[MeasureFDate2]
TimeStampFormat=%Y-%m-%d
Format=%a #DateFormat#
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFDay2Short]
Measure=Time
TimeStamp=[MeasureFDate2]
TimeStampFormat=%Y-%m-%d
Format=%a
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFDay2Long]
Measure=Time
TimeStamp=[MeasureFDate2]
TimeStampFormat=%Y-%m-%d
Format=%A
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFIcon2]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=7

[MeasureFCondition2]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=7
Substitute=#Symbols#
DynamicVariables=1

[MeasureFTempMin2]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=8

[MeasureFTempMin2Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMin2)+32)

[MeasureFTempMax2]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=9

[MeasureFTempMax2Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMax2)+32)

[MeasureFPrecipChance2]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=10

[MeasureFDate3]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=11

[MeasureFDay3Short]
Measure=Time
TimeStamp=[MeasureFDate3]
TimeStampFormat=%Y-%m-%d
Format=%a
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFDay3]
Measure=Time
TimeStamp=[MeasureFDate3]
TimeStampFormat=%Y-%m-%d
Format=%a #DateFormat#
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFDay3Long]
Measure=Time
TimeStamp=[MeasureFDate3]
TimeStampFormat=%Y-%m-%d
Format=%A
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFIcon3]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=12

[MeasureFCondition3]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=12
Substitute=#Symbols#
DynamicVariables=1

[MeasureFTempMin3]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=13

[MeasureFTempMin3Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMin3)+32)

[MeasureFTempMax3]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=14

[MeasureFTempMax3Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMax3)+32)

[MeasureFPrecipChance3]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=15

[MeasureFDate4]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=16

[MeasureFDay4]
Measure=Time
TimeStamp=[MeasureFDate4]
TimeStampFormat=%Y-%m-%d
Format=%a #DateFormat#
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFDay4Short]
Measure=Time
TimeStamp=[MeasureFDate4]
TimeStampFormat=%Y-%m-%d
Format=%a
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFDay4Long]
Measure=Time
TimeStamp=[MeasureFDate4]
TimeStampFormat=%Y-%m-%d
Format=%A
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFIcon4]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=17

[MeasureFCondition4]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=17
Substitute=#Symbols#
DynamicVariables=1

[MeasureFTempMin4]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=18

[MeasureFTempMin4Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMin4)+32)

[MeasureFTempMax4]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=19

[MeasureFTempMax4Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMax4)+32)

[MeasureFPrecipChance4]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=20

[MeasureFDate5]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=21

[MeasureFDay5]
Measure=Time
TimeStamp=[MeasureFDate5]
TimeStampFormat=%Y-%m-%d
Format=%a #DateFormat#
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFDay5Long]
Measure=Time
TimeStamp=[MeasureFDate5]
TimeStampFormat=%Y-%m-%d
Format=%A
DynamicVariables=1
Substitute=#Date#
Group=Time
Disabled=1

[MeasureFIcon5]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=22

[MeasureFCondition5]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=22
Substitute=#Symbols#
DynamicVariables=1

[MeasureFTempMin5]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=23

[MeasureFTempMin5Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMin5)+32)

[MeasureFTempMax5]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=24

[MeasureFTempMax5Imperial]
Measure=Calc
Formula=Round((9/5*MeasureFTempMax5)+32)

[MeasureFPrecipChance5]
Measure=WebParser
Url=[MeasureDailyForecast]
StringIndex=25



; ========================================
;              CONDITIONS
; ========================================


[MeasureConditions]
Measure=WebParser
Group=Parents
URL=[FORECASuperParent]
Disabled=1
StringIndex=1
RegExp=#Conditions#
LogSubstringErrors=0

[100]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=1

[110]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=2

[111]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=3

[112]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=4

[120]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=5

[121]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=6

[122]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=7

[130]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=8

[131]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=9

[132]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=10

[140]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=11

[141]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=12

[142]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=13

[200]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=14

[210]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=15

[211]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=16

[212]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=17

[220]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=18

[221]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=19

[222]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=20

[230]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=21

[231]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=22

[232]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=23

[240]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=24

[241]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=25

[242]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=26

[300]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=27

[310]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=28

[311]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=29

[312]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=30


[320]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=31

[321]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=32

[322]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=33

[330]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=34

[331]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=35

[332]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=36

[340]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=37

[341]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=38

[342]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=39

[400]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=40

[410]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=41

[411]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=42

[412]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=43

[420]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=44

[421]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=45

[422]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=46

[430]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=47

[431]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=48

[432]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=49

[440]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=50

[441]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=51

[442]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=52

[500]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=53

[600]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=54

[000]
Measure=WebParser
Url=[MeasureConditions]
StringIndex=55




; © 2020 by xxenium