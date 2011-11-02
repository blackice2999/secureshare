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

  $secureshareservices = array(
    'fb' => 'facebook',
    'twitter' => 'twitter',
    'gplus' => 'gplus',
  );

  // module settings
  $secureshare_node_options = node_get_types('names');
  $form['secureshare_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Display SecureShare on these content types:'),
    '#options' => $secureshare_node_options,
    '#default_value' => variable_get('secureshare_node_types', array('article')),
    '#description' => t('Each of these content types will have the "like" button automatically added to them.'),
  );
  $form['secureshare_showonteasers'] = array(
    '#type' => 'radios',
    '#title' => t('Display on teasers?'),
    '#options' => array(t('No')), //only No, because javascript not working with more than one teaser on one site, , t('Yes')
    '#default_value' => variable_get('secureshare_showonteasers', 0),
    '#description' => t('Only no, because javascript not working with more than one teaser on one site at the moment.'),
  );

  // service specific settings
  foreach ($secureshareservices as $service_short => $service_long) {

    $form['secureshare_' . $service_short] = array(
      '#type' => 'fieldset',
      '#title' => t($service_long . ' Settings'),
      '#collapsible' => TRUE,
    );
    // we have some default values for all services, we use it here to prevent duplicate code...
    $form['secureshare_' . $service_short][$service_short . '_status'] = array(
      '#type' => 'select',
      '#title' => t($service_long . ' TXT Info'),
      '#default_value' => variable_get($service_short . '_status', 'on'),
      '#options' => array('on' => t('on'), 'off' => t('off'))
    );


    // we have some default values for all services, we use it here to prevent duplicate code...
    $form['secureshare_' . $service_short][$service_short . '_txt_info'] = array(
      '#type' => 'textfield',
      '#title' => t($service_long . ' TXT Info'),
      '#default_value' => variable_get($service_short . '_txt_info', NULL),
    );

    $form['secureshare_' . $service_short][$service_short . '_txt_off'] = array(
      '#type' => 'textfield',
      '#title' => t($service_long . ' TXT Info'),
      '#default_value' => variable_get('secureshare_service_' . $service_short . '_txt_info', NULL),
    );

    $form['secureshare_' . $service_short][$service_short . '_txt_on'] = array(
      '#type' => 'textfield',
      '#title' => t($service_long . ' TXT Info'),
      '#default_value' => variable_get('secureshare_service_' . $service_short . '_txt_info', NULL),
    );


  }

  $form['secureshare_services'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Enabled services'),
    '#description' => t('Not implemented yet.'),
    '#options' => $option_list,
  );

  return system_settings_form($form);

}


