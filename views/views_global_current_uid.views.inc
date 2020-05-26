<?php

function views_global_current_uid_views_data_alter(&$data) {

  $data['views']['nothing_uid'] = array(
    'title' => t('Current user UID'),
    'help' => t('Provide current UID.'),
    'field' => array(
      'handler' => 'views_global_current_uid_handler_field_uid',
    ),
  );

}
