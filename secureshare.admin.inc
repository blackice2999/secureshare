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
      '#title' => t('Enabled'),
      '#description' => t('enable facebook button'),
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
      '#title' => t('perma option'),
      '#description' => t('Allow permanent activation?'),
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
    '#title' => t('Enabled'),
    '#description' => t('enable twitter button'),
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
    '#title' => t('perma option'),
    '#description' => t('Allow permanent activation?'),
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
    '#title' => t('Enabled'),
    '#description' => t('enable google+ button'),
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
    '#title' => t('perma option'),
    '#description' => t('Allow permanent activation?'),
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
