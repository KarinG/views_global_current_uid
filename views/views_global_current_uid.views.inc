<?php

function views_global_current_uid_views_data_alter(&$data) {

  $data['views']['nothing_uid'] = array(
    'title' => t('Current user UID'),
    'help' => t('Provide current UID.'),
    'field' => array(
      'handler' => 'views_global_current_uid_handler_field_uid',
    ),
  );

  if (function_exists('civicrm_initialize')) {

    $data['views']['nothing_civicrm_cid'] = array(
      'title' => t('Current user CiviCRM Contact ID'),
      'help' => t('Provide current CiviCRM Contact ID.'),
      'field' => array(
        'handler' => 'views_global_current_uid_handler_field_crm_id',
      ),
    );
  }
}
