# Secureshare / Socialshare Privacy

provides a implementation of the 2-click-solution from heise.de ( http://www.heise.de/ct/artikel/2-Klicks-fuer-mehr-Datenschutz-1333879.html )
for more privacy against Facebook, Twitter and Google+. This module implement the heise-jquery-code using libraries.

## Installation:

1.) Download the jquery-code from http://www.heise.de/extras/socialshareprivacy/ , extract it and put it in your libraries folder Example: sites/all/libraries/  > sites/all/libraries/secureshare

2.) Go to admin/build/modules and enable secureshare and secureshare_block or secureshare_field or both.

3.) Got to the settings (block or content type) and select an profile

## Configuration:

### Profiles:
You can create your own settings profile under Configuration > content authoring SecureShare profiles ("admin/config/content/secureshare").

## Known problems:

the css file in the heise library seems broken some stylings. Its not part of this module to fix these things.
But you can use hook_css_alter or theme to replace them. Or you can override the failures in your theme css.
Feel you free to send an issue to heise.de to fix the css code ;)

## Developers:

The core module uses hook_element_info() you can use it in your module like other drupal render elements.
If you want to use an profile you can submit the profile name via
#secureshare_profile => 'default',

or you can use own settings array over:
#secureshare_config => array(),

you can also use both. #secureshare_config will be merged over the profile settings.
You can also use the alter method module_secureshare_config_alter()