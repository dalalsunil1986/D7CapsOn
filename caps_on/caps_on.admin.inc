<?php

function caps_on_admin_form() {  
  $form['text'] = array(
    '#type' => 'fieldset',
    '#title' => t('Caps on Configuration'),
  );
  $form['text']['caps_on_enable'] = array(
      '#type'  => 'checkbox',
      '#title' => t('Enable module CSS (stylesheet) '),
      '#default_value' => variable_get('caps_on_css', 1),
      '#description' => t('Disable this option to turn off this module\'s CSS style sheet. If disabled, you should provide your own styling through your theme\'s stylesheet.'),
  );
  $form['text']['caps_on_capslock_msg'] = array(
    '#type'  => 'textfield',
    '#title' => t('Caps Lock Message'),
    '#default_value' => variable_get('caps_on_capslock_msg', 'Caps Lock On'),
    '#description' => 'Enter the text to be displayed when a user tries to enter a password with the caps look on.',
  );
  return system_settings_form($form);
}