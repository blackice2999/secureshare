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
    '#title' => t('Display SecureShare on these content types:'),
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
	$form['secureshare_services'] = array(
        '#type' => 'checkboxes',
        '#title' => t('Enabled services'),
        '#default_value' => variable_get('secureshare_services', array('facebookset', 'twitterset', 'gplusset')),
        '#options' => array(
            'facebookset' => 'Facebook',
            'twitterset' => 'Twitter',
            'gplusset' => 'Google Plus',
        ),
    );
	$form['secureshare_hovertext'] = array(
    '#type' => 'textfield',
    '#title' => t('Text show on hover'),
    '#default_value' => variable_get('secureshare_hovertext', 'Testtext'),
    '#description' => t('Specific text that will show when hover an service'),
  );
/**
*  $form['secureshare_language'] = array(
    '#type' => 'textfield',
    '#title' => t('Language'),
    '#default_value' => variable_get('secureshare_language', 'en_US'),
    '#description' => t('Specific language to use. Default is English. Examples:<br/>French (France): <em>fr_FR</em><br/>French (Canada): <em>fr_CA</em>'),
  );
 **/
  return system_settings_form($form);
}