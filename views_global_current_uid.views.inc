<?php

function views_global_current_uid_views_data_alter(&$data) {

  $data['views']['nothing_user_id'] = [
    'title' => t('Current user ID'),
    'help' => t('Provide current user ID.'),
    'field' => array(
      'id' => 'views_global_current_user_id',
    ),
  ];

	$moduleHandler = \Drupal::service('module_handler');
  if ($moduleHandler->moduleExists('civicrm_entity')) {
    $data['views']['nothing_civicrm_contact_id'] = [
      'title' => t('Current user\'s CiviCRM Contact ID'),
      'help' => t('Provide current CiviCRM Contact ID.'),
      'field' => array(
        'id' => 'views_global_current_civicrm_contact_id',
      ),
    ];
  }
}
