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
  $form['secureshare_node_types'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Display the Like button on these content types:'),
    '#options' => $secureshare_node_options,
    '#default_value' => variable_get('secureshare_node_types', array('article')),
    '#description' => t('Each of these content types will have the "like" button automatically added to them.'),
  );
  $form['secureshare_showonteasers'] = array(
    '#type' => 'radios',
    '#title' => t('Display on teasers?'),
    '#options' => array(t('No'), t('Yes')),
    '#default_value' => variable_get('secureshare_showonteasers', 0),
    '#description' => t('If <em>Yes</em> is selected, the button will appear even when the node being viewed is a teaser. Otherwise it will only appear when the full node is being viewed.'),
  );
  return system_settings_form($form);
}