<?php
// $Id$

/**
 * @file
 * Admin functions for secureshare.
 */

/**
 * Settings for nodes.
 */
function secureshare_admin_settings() {

  // the services we use
  $secureshareservices = array(
    'fb' => 'Facebook',
    'twitter' => 'Twitter',
    'gplus' => 'GPLUS',
  );

  // module settings
  // we will set the german info texts from heise as default and make them translatable

  $secureshare_node_options = node_get_types('names');
  $form['secureshare_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Display SecureShare on these content types:'),
    '#options' => $secureshare_node_options,
    '#default_value' => variable_get('secureshare_node_types', array('article')),
    '#description' => t('Each of these content types will have the Sharebutton automatically added to them.'),
  );
  $form['secureshare_showonteasers'] = array(
    '#type' => 'radios',
    '#title' => t('Display on teasers?'),
    '#options' => array(t('No'), t('Yes')),
    '#default_value' => variable_get('secureshare_showonteasers', 0),
    '#description' => t('Show Sharebuttons also on teaser?'),
  );
  $form['secureshare_infotxt'] = array(
    '#type' => 'textarea',
    '#title' => t(' Info-Text'),
    '#default_value' => variable_get('secureshare_infotxt', 'Wenn Sie diese Felder durch einen Klick aktivieren, werden Informationen an Facebook, Twitter oder Google in die USA übertragen und unter Umständen auch dort gespeichert. Näheres erfahren Sie durch einen Klick auf das <em>i</em>.'),
    '#description' => t('Set infotext for more informations'),
  );
  $form['secureshare_infourl'] = array(
    '#type' => 'textfield',
    '#title' => t(' Info-Url'),
    '#default_value' => variable_get('secureshare_infourl', 'http://www.heise.de/ct/artikel/2-Klicks-fuer-mehr-Datenschutz-1333879.html'),
    '#description' => t('Set the URL to more informations'),
  );

  // service specific settings
  foreach ($secureshareservices as $service_short => $service_long) {

    $form['secureshare_' . $service_short] = array(
      '#type' => 'fieldset',
      '#title' => t($service_long . ' Settings'),
      '#collapsible' => FALSE,
    );
    // we have some default values for all services, we use it here to prevent duplicate code...
    $form['secureshare_' . $service_short][$service_short . '_status'] = array(
      '#type' => 'select',
      '#title' => t($service_long . ' state'),
      '#default_value' => variable_get($service_short . '_status', 'on'),
      '#options' => array('on' => t('on'), 'off' => t('off'))
    );

    $form['secureshare_' . $service_short][$service_short . '_txt_info'] = array(
      '#type' => 'textarea',
      '#title' => t($service_long . ' Info hover'),
      '#default_value' => variable_get($service_short . '_txt_info', '2 Klicks für mehr Datenschutz: Erst wenn Sie hier klicken, wird der Button aktiv und Sie können Ihre Empfehlung senden. Schon beim Aktivieren werden Daten an Dritte übertragen; siehe <em>i</em>.'),
    );

  }


  return system_settings_form($form);

}


