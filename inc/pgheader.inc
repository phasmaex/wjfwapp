<div data-role="panel" id="navpanel" data-position="right" data-display="push" data-position-fixed="true" data-dismissible="true" data-theme="a">
<ul data-role="listview">
	<li data-role="list-divider">Navigation</li>
    <li><a href="#pg_news">News</a></li>
    <li><a href="#pg_news">Sports</a></li>
    <li><a href="#pg_weather">Weather</a></li>
    <li><a href="#pg_weather">Interactive Radar</a></li>
    <li><a href="#">Video</a></li>
</ul>
</div><!-- /panel -->
<div data-role="panel" id="settings" data-position="right" data-display="push" data-position-fixed="true" data-dismissible="true" data-theme="a">
<ul data-role="listview">

	<li data-role="list-divider">Settings</li>
    <li><a href="#">Change Location</a></li>
    <li><a href="#">Notifications</a></li>
	<li><a href="#">Contact Us</a></li>
</ul>
</div><!-- /panel -->

<a href="javascript:history.go(-1);" id="back_btn" style="position:fixed;left:5px;bottom:5px;" data-role="button" data-icon="back" data-mini="true" data-iconpos="left" data-iconpos="notext" data-theme="c" data-inline="true">Back</a>

<div id="headercontainer" data-role="header" data-position="fixed">
	<div class="logoimg"></div>
	<img src="img/tempoverlay.fw.png" style="position:absolute;top:6px;right:150px;">
	<div data-role="controlgroup" data-type="horizontal" data-mini="true" style="position:absolute;top:3px;right:10px;">
	<a href="#pg_index" data-role="button" data-icon="home" data-iconpos="notext" data-inline="true" data-theme="b">Home</a>
	<a href="#settings" data-role="button" data-icon="gear" data-iconpos="notext" data-inline="true" data-theme="b">Settings</a>
	<a href="#navpanel" data-role="button" data-icon="bars" data-iconpos="notext" data-inline="true" data-theme="b">Navigation</a>
	</div>
</div>