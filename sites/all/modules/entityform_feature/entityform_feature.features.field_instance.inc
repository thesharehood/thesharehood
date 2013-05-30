<?php
/**
 * @file
 * entityform_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function entityform_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-tell_us_where_you_live-field_country'
  $field_instances['entityform-tell_us_where_you_live-field_country'] = array(
    'bundle' => 'tell_us_where_you_live',
    'default_value' => array(
      0 => array(
        'iso2' => 'AU',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_country',
    'label' => 'Country',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'countries',
      'settings' => array(
        'continents' => array(
          'AF' => 0,
          'AN' => 0,
          'AS' => 0,
          'EU' => 0,
          'NA' => 0,
          'OC' => 0,
          'SA' => 0,
          'UN' => 0,
        ),
        'enabled' => 1,
        'size' => 5,
      ),
      'type' => 'country_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-tell_us_where_you_live-field_postcode'
  $field_instances['entityform-tell_us_where_you_live-field_postcode'] = array(
    'bundle' => 'tell_us_where_you_live',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_postcode',
    'label' => 'Postcode/Zipcode',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-tell_us_where_you_live-field_remember_me'
  $field_instances['entityform-tell_us_where_you_live-field_remember_me'] = array(
    'bundle' => 'tell_us_where_you_live',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'If you check this box we will remember these details for next time you visit the Sharehood from this browser. You must have cookies enabled to do this.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_remember_me',
    'label' => 'Remember me',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Country');
  t('If you check this box we will remember these details for next time you visit the Sharehood from this browser. You must have cookies enabled to do this.');
  t('Postcode/Zipcode');
  t('Remember me');

  return $field_instances;
}
