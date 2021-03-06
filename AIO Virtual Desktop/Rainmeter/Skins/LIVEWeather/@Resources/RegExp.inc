; Do NOT change this file unless you are sure you know what you are doing !!!
; ========================================================================

; © 2020 by xxenium

[Variables]


CurrentWeatherHTML=(?siU)(?(?=.*<h1 class=".*">(.*)<).*/h1>)(?(?=.*<div class=".*">).*<div class=".*"><div class=".*"><span color=".*" style=".*" class=".*">(.*)</span></div>)(?(?=.*<div class class).*>(.*)<span color=".*" style=".*" class=".*">(.*)</span></div></div>)(?(?=.*<div class=".*">).*<img alt=".*" width=".*" height=".*" src="/static/images/symbols/(.*).svg" class=".*" /></div>)(?(?=.*<div class=".*">).*<div><img width=".*" height=".*" alt=".*" title=".*" src="/static/images/wind/blue/(.*).svg" class=".*" /></div><p class=".*"><span class class>(.*)</span>.*</p><div color=".*" style=".*" class=".*">(.*)<span class class>(.*)</span>.*</div></div></div>)(?(?=.*<div class=".*").*>(.*)</div><div color=".*" style=".*" class=".*">)(?(?=.*<div class=".*">).*<div color=".*" style=".*" class=".*"><span class class>.*</span>.*/div>.*</div>)(?(?=.*<div class=".*">).*<div color=".*" style=".*" class=".*"><span class class>(.*)</span>.*</div>(.*)</div>)(?(?=.*<div class=".*">).*<div color=".*" style=".*" class=".*"><span class class>(.*)</span>.*</div>(.*)</div>)(?(?=.*</div><div color=".*").* style=".*" class=".*">.*<span>(.*)</span><div class class>(.*)</div></div><div color=".*" style=".*" class=".*"><p><span>(.*)</span>.*</div><div color=".*" style=".*" class=".*"><span>(.*)</span><div class class>(.*)</div>)


CurrentWeatherDayPart=(?siU)"daily":{"data":.*"date":".*",.*"daysteps":.*{"symb":"(.*)","temp":(.*),.*},{"symb":"(.*)","temp":(.*),.*},{"symb":"(.*)","temp":(.*),.*},{"symb":"(.*)","temp":(.*),.*}



DailyForecast=(?siU)"daily":{"data":.*(?(?=.*{"date").*:"(.*)","symb":"(.*)","tmin":(.*),"tmax":(.*),"rain":.*,"rainp":(.*),"rhum":.*,"windd":.*,"winds":.*,"sunrise":".*","sunset":".*","daylen":".*","uvi":.*}),(?(?=.*{"date":"(.*)").*,"symb":"(.*)","tmin":(.*),"tmax":(.*),"rain":.*,"rainp":(.*),"rhum":.*,"windd":.*,"winds":.*,"sunrise":".*","sunset":".*","daylen":".*","uvi":.*}),(?(?=.*{"date":"(.*)").*,"symb":"(.*)","tmin":(.*),"tmax":(.*),"rain":.*,"rainp":(.*),"rhum":.*,"windd":.*,"winds":.*,"sunrise":".*","sunset":".*","daylen":".*","uvi":.*}),(?(?=.*{"date":"(.*)").*,"symb":"(.*)","tmin":(.*),"tmax":(.*),"rain":.*,"rainp":(.*),"rhum":.*,"windd":.*,"winds":.*,"sunrise":".*","sunset":".*","daylen":".*","uvi":.*}),(?(?=.*{"date":"(.*)").*,"symb":"(.*)","tmin":(.*),"tmax":(.*),"rain":.*,"rainp":(.*),"rhum":.*,"windd":.*,"winds":.*,"sunrise":".*","sunset":".*","daylen":".*","uvi":.*}),(?(?=.*{"date":"(.*)").*,"symb":"(.*)","tmin":(.*),"tmax":(.*),"rain":.*,"rainp":(.*),"rhum":.*,"windd":.*,"winds":.*,"sunrise":".*","sunset":".*","daylen":".*","uvi":.*}),(?(?=.*{"date":"(.*)").*,"symb":"(.*)","tmin":(.*),"tmax":(.*),"rain":.*,"rainp":(.*),"rhum":.*,"windd":.*,"winds":.*,"sunrise":".*","sunset":".*","daylen":".*","uvi":.*}),(?(?=.*{"date":"(.*)").*,"symb":"(.*)","tmin":(.*),"tmax":(.*),"rain":.*,"rainp":(.*),"rhum":.*,"windd":.*,"winds":.*,"sunrise":".*","sunset":".*","daylen":".*","uvi":.*}),



Conditions=(?siU)"symbols":{"100":"(.*)","110":"(.*)","111":"(.*)","112":"(.*)","120":"(.*)","121":"(.*)","122":"(.*)","130":"(.*)","131":"(.*)","132":"(.*)","140":"(.*)","141":"(.*)","142":"(.*)","200":"(.*)","210":"(.*)","211":"(.*)","212":"(.*)","220":"(.*)","221":"(.*)","222":"(.*)","230":"(.*)","231":"(.*)","232":"(.*)","240":"(.*)","241":"(.*)","242":"(.*)","300":"(.*)","310":"(.*)","311":"(.*)","312":"(.*)","320":"(.*)","321":"(.*)","322":"(.*)","330":"(.*)","331":"(.*)","332":"(.*)","340":"(.*)","341":"(.*)","342":"(.*)","400":"(.*)","410":"(.*)","411":"(.*)","412":"(.*)","420":"(.*)","421":"(.*)","422":"(.*)","430":"(.*)","431":"(.*)","432":"(.*)","440":"(.*)","441":"(.*)","442":"(.*)","500":"(.*)","600":"(.*)","000":"(.*)"}



; © 2020 by xxenium