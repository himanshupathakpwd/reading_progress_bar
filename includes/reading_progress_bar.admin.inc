<?php

/**
 * @file
 * Administrative functions for reading progress bar module.
 */

function _reading_progress_bar_configuration($form, &$form_state) {
  $form['reading_progress_bar_top_bar'] = array(
    '#type' => 'fieldset',
    '#title' => t('Adjust top bar settings'),
    '#description' => t('You can customize the appearance according to you'),
    '#collapsible' => TRUE,
    '#tree' => TRUE,
  );
  $top_bar_values = variable_get('reading_progress_bar_top_bar', array());
  $form['reading_progress_bar_top_bar']['height'] = array(
    '#type' => 'textfield',
    '#title' => t('Height'),
    '#description' => t('You can enter css height for the reading bar.'),
    '#default_value' => isset($top_bar_values['height']) ? $top_bar_values['height'] : READING_PROGRESS_BAR_HEIGHT,
  );
  $form['reading_progress_bar_top_bar']['color'] = array(
    '#type' => 'textfield',
    '#title' => t('Color'),
    '#description' => t('You can enter css color for the reading bar.'),
    '#default_value' => isset($top_bar_values['color']) ? $top_bar_values['color'] : READING_PROGRESS_BAR_COLOR,
  );
  $form['reading_progress_bar_top_bar']['background_color'] = array(
    '#type' => 'textfield',
    '#title' => t('Background Color'),
    '#description' => t('You can enter css background color for the reading bar.'),
    '#default_value' => isset($top_bar_values['background_color']) ? $top_bar_values['background_color'] : READING_PROGRESS_BAR_BACKGROUND_COLOR,
  );
  $form['reading_progress_bar_top_bar']['border'] = array(
    '#type' => 'textfield',
    '#title' => t('Border'),
    '#description' => t('You can enter css border for the reading bar.'),
    '#default_value' => isset($top_bar_values['border']) ? $top_bar_values['border'] : READING_PROGRESS_BAR_BORDER,
  );
  return system_settings_form($form);
}