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
  $secureshare_node_options = node_type_get_names();
  $form['secureshare_language'] = array(
    '#type' => 'textfield',
    '#title' => t('Language'),
    '#default_value' => variable_get('secureshare_language', 'en_US'),
    '#description' => t('Specific language to use. Default is English. Examples:<br/>German (Germany): <em>de_DE</em>'),
  );
  return system_settings_form($form);
}
