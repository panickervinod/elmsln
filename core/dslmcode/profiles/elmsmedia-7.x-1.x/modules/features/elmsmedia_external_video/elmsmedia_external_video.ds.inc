<?php
/**
 * @file
 * elmsmedia_external_video.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function elmsmedia_external_video_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|external_video|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'external_video';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'zf_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_cis_course_ref',
      ),
      'left' => array(
        1 => 'title',
        2 => 'field_external_media',
        3 => 'field_poster',
      ),
      'right' => array(
        4 => 'field_tagging',
        5 => 'field_figurelabel_ref',
      ),
      'footer' => array(
        6 => 'og_group_ref',
      ),
      'hidden' => array(
        7 => 'path',
        8 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_cis_course_ref' => 'header',
      'title' => 'left',
      'field_external_media' => 'left',
      'field_poster' => 'left',
      'field_tagging' => 'right',
      'field_figurelabel_ref' => 'right',
      'og_group_ref' => 'footer',
      'path' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|external_video|form'] = $ds_layout;

  return $export;
}
