<?php
/**
 * @file
 * contains the settings forms for secureshare module
 */


/**
 * Helper form function provides the settings elements without default values
 * @return array
 */
function secureshare_settings_form()
{
  $form = array();

  $form['secureshare_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('Secureshare settings'),
    '#tree' => TRUE,
  );

  $form['secureshare_settings']['info_link'] = array(
    '#type' => 'textfield',
    '#title' => t('Disclaimer info link'),
    '#description' => t('Link to detailed disclaimer information'),
  );

  $form['secureshare_settings']['txt_help'] = array(
    '#type' => 'textarea',
    '#title' => t('MouseOver information'),
    '#description' => t('MouseOver text for the informations icon.'),
  );

  $form['secureshare_settings']['settings_perma'] = array(
    '#type' => 'textfield',
    '#title' => t('Perma settings heading'),
    '#description' => t('the heading text for the perma settings dialog'),
  );

  // @TODO: add integer validation
  $form['secureshare_settings']['cookie_expires'] = array(
    '#type' => 'textfield',
    '#title' => t('Cookie expire'),
    '#description' => t('Cookie expire in days'),
  );

  $form['secureshare_settings']['services']['facebook'] = array(
    '#type' => 'fieldset',
    '#title' => t('Facebook'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

    $form['secureshare_settings']['services']['facebook']['status'] = array(
      '#type' => 'checkbox',
      '#title' => t('Disable'),
      '#description' => t('disable facebook button'),
      // heise plugin dont use true/false for this... instead using on/off
      // on is the default behavior... so we disable it here...
      '#return_value' => 'off',
    );

    $form['secureshare_settings']['services']['facebook']['dummy_img'] = array(
      '#type' => 'textfield',
      '#title' => t('Imagepath'),
      '#description' => t('path to the displayed image'),
    );

    $form['secureshare_settings']['services']['facebook']['txt_info'] = array(
      '#type' => 'textfield',
      '#title' => t('MouseOver button text'),
      '#description' => t('MouseOver button text'),
    );

    $form['secureshare_settings']['services']['facebook']['txt_fb_off'] = array(
      '#type' => 'textfield',
      '#title' => t('Image text off'),
      '#description' => t('alternative text for the image button on off mode'),
    );

    $form['secureshare_settings']['services']['facebook']['txt_fb_on'] = array(
      '#type' => 'textfield',
      '#title' => t('Image text on'),
      '#description' => t('alternative text for the image button in on mode'),
    );

    $form['secureshare_settings']['services']['facebook']['perma_option'] = array(
      '#type' => 'checkbox',
      '#title' => t('disable perma option'),
      '#description' => t('disable perma option'),
      // heise plugin dont use true/false for this... instead using on/off
      // on is the default behavior... so we disable it here...
      '#return_value' => 'off',
    );

    $form['secureshare_settings']['services']['facebook']['display_name'] = array(
      '#type' => 'textfield',
      '#title' => t('Display name'),
      '#description' => t('Name of the displayed social network.'),
    );

    // @TODO: need to be implemented
    //$form['secureshare_settings']['services']['facebook']['referrer_track'] = array();

    $form['secureshare_settings']['services']['facebook']['language'] = array(
      '#type' => 'select',
      '#title' => t('Language detection'),
      '#description' => t('Language detection mode'),
      '#options' => array(
        'user' => t('User language'),
        'system' => t('Default language'),
      ),
    );

    $form['secureshare_settings']['services']['facebook']['action'] = array(
      '#type' => 'select',
      '#title' => t('Button style'),
      '#options' => array(
        'recommend' => t('recommend'),
        'like' => t('like'),
      ),
    );


  $form['secureshare_settings']['services']['twitter'] = array(
    '#type' => 'fieldset',
    '#title' => t('Twitter'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

  $form['secureshare_settings']['services']['twitter']['status'] = array(
    '#type' => 'checkbox',
    '#title' => t('Disable'),
    '#description' => t('disable twitter button'),
    // heise plugin dont use true/false for this... instead using on/off
    // on is the default behavior... so we disable it here...
    '#return_value' => 'off',
  );

  $form['secureshare_settings']['services']['twitter']['dummy_img'] = array(
    '#type' => 'textfield',
    '#title' => t('Imagepath'),
    '#description' => t('path to the displayed image'),
  );

  $form['secureshare_settings']['services']['twitter']['txt_info'] = array(
    '#type' => 'textfield',
    '#title' => t('MouseOver button text'),
    '#description' => t('MouseOver button text'),
  );

  $form['secureshare_settings']['services']['twitter']['txt_twitter_off'] = array(
    '#type' => 'textfield',
    '#title' => t('Image text off'),
    '#description' => t('alternative text for the image button on off mode'),
  );

  $form['secureshare_settings']['services']['twitter']['txt_twitter_on'] = array(
    '#type' => 'textfield',
    '#title' => t('Image text on'),
    '#description' => t('alternative text for the image button in on mode'),
  );

  $form['secureshare_settings']['services']['twitter']['perma_option'] = array(
    '#type' => 'checkbox',
    '#title' => t('disable perma option'),
    '#description' => t('disable permanent activation?'),
    // heise plugin dont use true/false for this... instead using on/off
    // on is the default behavior... so we disable it here...
    '#return_value' => 'off',
  );

  $form['secureshare_settings']['services']['twitter']['display_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Display name'),
    '#description' => t('Name of the displayed social network.'),
  );

  // @TODO: need to be implemented
  //$form['secureshare_settings']['services']['twitter']['referrer_track'] = array();

  $form['secureshare_settings']['services']['twitter']['tweet_text'] = array(
    '#type' => 'select',
    '#title' => t('Tweet text'),
    '#description' => t('tweet text detection mode'),
    '#options' => array(
      'default' => t('Use script default'),
    ),
  );

  $form['secureshare_settings']['services']['twitter']['language'] = array(
    '#type' => 'select',
    '#title' => t('Language detection'),
    '#description' => t('Language detection mode'),
    '#options' => array(
      'user' => t('User language'),
      'system' => t('Default language'),
    ),
  );

  $form['secureshare_settings']['services']['gplus'] = array(
    '#type' => 'fieldset',
    '#title' => t('Google+'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
  );

// ---
  $form['secureshare_settings']['services']['gplus']['status'] = array(
    '#type' => 'checkbox',
    '#title' => t('disable'),
    '#description' => t('disable google+ button'),
    // heise plugin dont use true/false for this... instead using on/off
    // on is the default behavior... so we disable it here...
    '#return_value' => 'off',
  );

  $form['secureshare_settings']['services']['gplus']['dummy_img'] = array(
    '#type' => 'textfield',
    '#title' => t('Imagepath'),
    '#description' => t('path to the displayed image'),
  );

  $form['secureshare_settings']['services']['gplus']['txt_info'] = array(
    '#type' => 'textfield',
    '#title' => t('MouseOver button text'),
    '#description' => t('MouseOver button text'),
  );

  $form['secureshare_settings']['services']['gplus']['txt_gplus_off'] = array(
    '#type' => 'textfield',
    '#title' => t('Image text off'),
    '#description' => t('alternative text for the image button on off mode'),
  );

  $form['secureshare_settings']['services']['gplus']['txt_gplus_on'] = array(
    '#type' => 'textfield',
    '#title' => t('Image text on'),
    '#description' => t('alternative text for the image button in on mode'),
  );

  $form['secureshare_settings']['services']['gplus']['perma_option'] = array(
    '#type' => 'checkbox',
    '#title' => t('disable perma option'),
    '#description' => t('disable permanent activation?'),
    // heise plugin dont use true/false for this... instead using on/off
    // on is the default behavior... so we disable it here...
    '#return_value' => 'off',
  );

  $form['secureshare_settings']['services']['gplus']['display_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Display name'),
    '#description' => t('Name of the displayed social network.'),
  );

  // @TODO: need to be implemented
  //$form['secureshare_settings']['services']['gplus']['referrer_track'] = array();

  $form['secureshare_settings']['services']['gplus']['language'] = array(
    '#type' => 'select',
    '#title' => t('Language detection'),
    '#description' => t('Language detection mode'),
    '#options' => array(
      'user' => t('User language'),
      'system' => t('Default language'),
    ),
  );

  return $form;
}

/**
 * Helper function!: Maps and merge the settings array into form element default values
 * @param $element
 * @param array $settings
 */
function _secureshare_merge_form_defaults(&$element, $settings = array()) {
  $children = element_children($element, TRUE);

  foreach ($children as $child_key) {
    // is the child a element and we have a settings merge in
    if (isset($element[$child_key]['#type']) && $element[$child_key]['#type'] != 'fieldset' && isset($settings[$child_key])) {
      $element[$child_key]['#default_value'] = $settings[$child_key];
    }

    $child_of_child = element_children($element[$child_key], TRUE);
    if ($child_of_child) {
      _secureshare_merge_form_defaults($element[$child_key], $settings[$child_key]);
    }
  }

  return $element;
}