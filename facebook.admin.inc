<?php
// $Id$

/**
 * @file
 * Admin functions for secureshare facebookbutton.
 */


/**
 * Settings for nodes.
 */
function secureshare_admin_settings() {
  $form['secureshare_iframe_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Width of the iframe (px)'),
    '#default_value' => variable_get('secureshare_iframe_width', '450'),
    '#description' => t('Width of the iframe, in pixels. Default is 450. <em>Note: lower values may crop the output.</em>'),
  );
  $form['secureshare_iframe_height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height of the iframe (px)'),
    '#default_value' => variable_get('secureshare_iframe_height', '80'),
    '#description' => t('Height of the iframe, in pixels. Default is 80. <em>Note: lower values may crop the output.</em>'),
  );
  $form['secureshare_iframe_css'] = array(
    '#type' => 'textfield',
    '#title' => t('Extra css styling needed'),
    '#default_value' => variable_get('secureshare_iframe_css', ''),
    '#description' => t('Extra css attributes needed to make the iframe behave for your specific requirements. Will not necessarily overwrite existing styling. To alter the dimensions of the iframe, use the height and width fields found above.<br/>Example: <em>float: right; padding: 5px;</em>'),
  );
  $form['secureshare_layout'] = array(
    '#type' => 'select',
    '#title' => t('Layout style'),
    '#options' => array('standard' => t('Standard'), 'box_count' => t('Box Count'), 'button_count' => t('Button Count')),
    '#default_value' => variable_get('secureshare_layout', 'standard'),
    '#description' => t('Determines the size and amount of social context next to the button.'),
  );
  $form['secureshare_show_faces'] = array(
    '#type' => 'select',
    '#title' => t('Show faces in the box?'),
    '#options' => array('show' => t('Show faces'), 'hide' => t('Do not show faces')),
    '#default_value' => variable_get('secureshare_show_faces', 'show'),
    '#description' => t('Show profile pictures below the button. Only works if <em>Layout style</em> (found above) is set to <em>Standard</em> (otherwise, value is ignored).'),
  );
  $form['secureshare_action'] = array(
    '#type' => 'select',
    '#title' => t('Verb to display'),
    '#options' => array('like' => t('Like'), 'recommend' => t('Recommend')),
    '#default_value' => variable_get('secureshare_action', 'like'),
    '#description' => t('The verbiage to display inside the button itself.'),
  );
/**  $form['secureshare_displaysend'] = array(
    '#type' => 'select',
    '#title' => t('Display <em>send</em> option?'),
    '#options' => array('true' => t('Display'), 'false' => t('Do not display')),
    '#default_value' => variable_get('secureshare_displaysend', 'false'),
    '#description' => t('Optionally display the <em>Send</em> button next to the <em>Like/Recommend</em> box.<br/><strong>Note: this feature is currently unavailable from Facebook.</strong> Although setting the value to <em>Display</em> will not hurt anything, the output will not be affected either way.'),
  ); */
  $form['secureshare_font'] = array(
    '#type' => 'select',
    '#title' => t('Font'),
    '#options' => array('arial' => 'Arial',
                'lucida+grande' => 'Lucida Grande',
                'segoe+ui' => 'Segoe UI',
                'tahoma' => 'Tahoma',
                'trebuchet+ms' => 'Trebuchet MS',
                'verdana' => 'Verdana'),
    '#default_value' => variable_get('secureshare_font', 'arial'),
    '#description' => t('The font with which to display the text of the button.'),
  );
  $form['secureshare_color_scheme'] = array(
    '#type' => 'select',
    '#title' => t('Color scheme'),
    '#options' => array('light' => t('Light'), 'dark' => t('Dark')),
    '#default_value' => variable_get('secureshare_color_scheme', 'light'),
    '#description' => t('The color scheme of the box environtment.'),
  );
  $form['secureshare_weight'] = array(
    '#type' => 'select',
    '#title' => t('Weight'),
    // Note to self: THIS has GOT to change...
    '#options' => array('-50' => '-50', '-49' => '-49', '-48' => '-48', '-47' => '-47', '-46' => '-46', '-45' => '-45', '-44' => '-44', '-43' => '-43', '-42' => '-42', '-41' => '-41', '-40' => '-40', '-39' => '-39', '-38' => '-38', '-37' => '-37', '-36' => '-36', '-35' => '-35', '-34' => '-34', '-33' => '-33', '-32' => '-32', '-31' => '-31', '-30' => '-30', '-29' => '-29', '-28' => '-28', '-27' => '-27', '-26' => '-26', '-25' => '-25', '-24' => '-24', '-23' => '-23', '-22' => '-22', '-21' => '-21', '-20' => '-20', '-19' => '-19', '-18' => '-18', '-17' => '-17', '-16' => '-16', '-15' => '-15', '-14' => '-14', '-13' => '-13', '-12' => '-12', '-11' => '-11', '-10' => '-10', '-9' => '-9', '-8' => '-8', '-7' => '-7', '-6' => '-6', '-5' => '-5', '-4' => '-4', '-3' => '-3', '-2' => '-2', '-1' => '-1', '0' => '0', '1' => '1', '2' => '2', '3' => '3', '4' => '4', '5' => '5', '6' => '6', '7' => '7', '8' => '8', '9' => '9', '10' => '10', '11' => '11', '12' => '12', '13' => '13', '14' => '14', '15' => '15', '16' => '16', '17' => '17', '18' => '18', '19' => '19', '20' => '20', '21' => '21', '22' => '22', '23' => '23', '24' => '24', '25' => '25', '26' => '26', '27' => '27', '28' => '28', '29' => '29', '30' => '30', '31' => '31', '32' => '32', '33' => '33', '34' => '34', '35' => '35', '36' => '36', '37' => '37', '38' => '38', '39' => '39', '40' => '40', '41' => '41', '42' => '42', '43' => '43', '44' => '44', '45' => '45', '46' => '46', '47' => '47', '48' => '48', '49' => '49', '50' => '50'),
    '#default_value' => variable_get('secureshare_weight', '50'),
    '#description' => t('The weight determines where on a node the like button will appear. The larger the weight, the lower it will appear on the node. For example, if you want the button to appear more toward the top of the node, choose <em>-40</em> as opposed to <em>-39, -38, 0, 1,</em> or <em>50,</em> etc.'),
    );
  return system_settings_form($form);
}