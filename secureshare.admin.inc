<?php
// $Id$

/**
 * @file
 * Admin functions for secureshare.
 */

/**
 * Settings for nodes.
 */
function secureshare_admin_settings()
{
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
		'#options' => array(t('No')), //only No, because javascript not working with more than one teaser on one site, , t('Yes')
		'#default_value' => variable_get('secureshare_showonteasers', 0),
		'#description' => t('Only no, because javascript not working with more than one teaser on one site at the moment.'),
	);
	$form['secureshare_services'] = array(
		'#type' => 'checkboxes',
		'#title' => t('Enabled services'),
		'#description' => t('Not implemented yet.'),
	);
	$form['secureshare_appid'] = array(
		'#type' => 'textfield',
		'#title' => t('Facebook Application-ID'),
		'#default_value' => variable_get('secureshare_appid', '234037923313454'),
		'#description' => t('Set the Facebook Application-ID'),
	);

	$form['secureshare_hovertext'] = array(
		'#type' => 'textarea',
		'#title' => t('Text to show on hover'),
		'#default_value' => variable_get('secureshare_hovertext', '2 Klicks f&uuml;r mehr Datenschutz: Erst wenn Sie hier klicken, wird der Button aktiv und Sie k&ouml;nnen Ihre Empfehlung senden. Schon beim Aktivieren werden Daten an Dritte &uuml;bertragen &ndash; siehe <em>i</em>.'),
		'#description' => t('Specific text that will show when hover an service'),
	);
	
	return system_settings_form($form);

}


