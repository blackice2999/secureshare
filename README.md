h1. Secureshare / Socialshare Privacy

provides a render element to implement the 2-click-solution from heise.de ( http://www.heise.de/ct/artikel/2-Klicks-fuer-mehr-Datenschutz-1333879.html )
for more privacy against Facebook, Twitter and Google+. This module implement the heise-jquery-code using libraries.

h2.Installation:
--------------
Download the jquery-code from http://www.heise.de/extras/socialshareprivacy/ , extract it and put it in your libraries folder
Example: sites/all/libraries/  > sites/all/libraries/secureshare

h2.Configuration:
--------------
the main module self dont contain any configuration pages. Show in submodule readme for specific configurations.

h2.Developers:
--------------
The core module uses hook_element_info() you can use it in your module like other drupal render elements. Settings will be done in #secureshare_config